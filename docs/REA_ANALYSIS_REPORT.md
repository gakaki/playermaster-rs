# PlayerMaster v1.9.338 逆向分析报告（REA）

> 工具：REA 6.9.0（morluto/rea，`npx rea-agents`）+ 7-Zip 25.01 + NSH 0.4
> 目标：`/Users/g/Desktop/卡莱特a60云播/PlayerMaster_Setup_1.9.338.exe`
> 分析日期：2026-11-17
> 用途：合法互操作/界面复刻。所有结论均来自对文件的静态观察，未运行目标程序、未绕过任何授权。

---

## 1. 安装程序结构（观察）

- 文件类型：PE32 GUI / Intel 80386，390,440,464 字节（372 MiB）
- 打包器：**NSIS-Park-3 Unicode**（特征 `NullsoftInst` @ 0x4DA08），LZMA:23 压缩
- 内含文件：**18,017** 个（含 18000+ LED 驱动芯片数据文件）
- 安装包主要目录：
  - `PlayerMaster.exe` + 30+ 自有 DLL
  - `LEDSetting/`（芯片数据、各平台库）
  - `locales/`（CEF 语言包 50+ 种）
  - `Language/`（7 模块 × 多语言 UI 文案）
  - `data/`（Config.ini、天气数据、GIF 素材）
  - `$PLUGINSDIR/`（安装界面位图、插件）

## 2. 主程序身份（REA Evidence）

| 属性 | 值 |
|---|---|
| 文件 | `PlayerMaster.exe` |
| SHA-256 | `28c237311d205845ee9adb43eb9b998c374d37ca9d6e67217acf6bc624af8156` |
| 格式 | PE32 / x86 (machine 332) |
| REA 证据 ID | `ev_a728e0a91c1caa1e085b50ac7b85ecd1cd11a55b3f49c7382907bfb9b8b4ede9`（导入表） |
| 资源证据 ID | `ev_17ec4f8700fe06f565777a0412bc97673393399a67d2b64dcbfe66a55c75fab4` |

### 技术栈（由导入表推断）

- **MFC 2013**：`mfc120u.dll`（245 函数）、`MSVCR120.dll`、`MSVCP120.dll`
- **CEF / Chromium Embedded Framework**：`libcef.dll`（28 个 cef_* 导入）、`*.pak`、`locales/`
- **SDL2**（`SDL_Init`）、**GDI+**（`GdipDrawImageRect` 等）、**sqlite3**、**libcurl + OpenSSL**
- **FFmpeg**（随包 `avcodec-58` 等 + `ffmpeg.exe`），用于媒体处理

### 模块化架构（REA 导入表实证）

主程序直接导入以下自研模块的导出函数：

| DLL | 导入函数 | 职责 |
|---|---|---|
| `DMUI.dll` | `DeviceManager_Init/Release` | 设备管理 UI |
| `PMUI.dll` | `MediaLib_Init`、`ProgramManager_Init/Release` | 媒体库 / 节目管理 |
| `SMUI.dll` | `ScheduleManager_Init/Release` | 排程管理 |
| `ColorLightControl.dll` | 86 个 C++ 符号（`CColorBaseDlg`、`CWndShadow`、`CEditEx`） | 自定义控件库 |
| `CommonData.dll` | 45 函数（`CConfigSaveAndLoad`、`CCacheManager`、`IDataManager`） | 配置/缓存/数据 |
| `CommonClass.dll` | `CRegister`、`CAppChecking`、`CModuleLanguageTrans`、`CBacCrypt` | 注册表/多语言/加密 |
| `DeviceControl.dll` / `ProgramControl.dll` / `ScheduleControl.dll` / `ProgramData.dll` / `Render.dll` / `ItemRender.dll` / `Effect.dll` | — | 设备控制/节目控制/排程/数据/渲染/特效 |

回调接口：`IPlayerMasterCallBack`、`UILableBase`（原文拼写）——模块通过该接口与主窗口通信。

### 通信协议（由二进制字符串观察）

从主程序与 DLL 中提取到 **125 个 REST API 端点**和云端域名 `colorlightcloud.com`（详见 `rea-analysis/network-endpoints.json`）：

- 局域网模式：通过 `http://<播放盒IP>/api/...` 的 HTTP REST 接口通信，例如
  `/api/brightness`（亮度）、`/api/colortemp`（色温）、`/api/volume`（音量）、
  `/api/playprogram`（播放节目）、`/api/reboot`（重启）、`/api/sleep`（休眠）、
  `/api/screenshot`（截图）、`/api/edid`、`/api/fps`、`/api/fonts`、`/api/uploadpackage` 等；
  还有本地端口 `8989` 的 `/api/smart_read_serial_info`。
- 云模式：连接 `colorlightcloud.com` 云端服务。
- 辅助协议：FTP（发布上传）、FFmpeg（媒体转码）、SDL2（视频渲染）、sqlite3（本地数据）。

## 3. UI 功能结构（由 Language 文案还原）

文案表：`Language/<模块>/Multi_chi.ini`（UTF-16 LE，`key = value`）。提取结果见 `rea-analysis/ui-strings.json`。

### 全局（`Other`）
- 模式：**云模式 / 局域网模式**（`IDS_Mode_Cloud` / `IDS_Mode_Lan`）
- 登录/账户信息/修改密码/切换用户/退出
- 四大导航：**设备管理 / 节目管理 / 排程管理 / 软件设置**（`IDS_DEVICE_MANAGER` 等）
- 操作：发布节目、发布节目排程、发布指令排程、发布详情、一键加密/解锁/改密码、重命名、备注、添加播放盒
- 语言：简体中文/繁體中文/日本語/English/French/Russian/Turkish
- 关于：编译序号 338，卡莱特云科技股份有限公司

### 设备管理（`DeviceManager`，957 条）
- 设备信息面板：同步信号、正在播放、即将播放、缩略图/全图、分辨率、亮度、色温、音量、IP、运行时间、最后在线、时区、磁盘容量、版本/型号、升级
- 操作按钮：查看排程、播放统计、监控信息、亮度、色温、音量、时间、电源、网络、信号切换、监控、高级设置、输出配置、设备语言、按钮配置、用户软件、返回主页
- 对话框：屏幕截图、亮度/色温/音量调节、时间/电源/网络设置

### 节目编辑（`ProgramEdit`，1178 条）
窗口类型（节目可以包含的窗口）：
- 文件窗、空文件窗、单行/单列/多行文本窗口
- 天气预报窗口（中国气象 / 全球气象）、环境信息窗口
- 时钟窗口、计时窗口、网页窗口、流媒体窗口、新闻聚合(RSS)窗口
- 外部视频窗口、数据库窗口、Modbus 窗口、图文走字窗口、炫彩窗口
- 素材操作：添加视频/图片/RTF/Txt/Gif/Office、单行/单列/多行文字

### 节目管理（`ProgramManager`，147 条）
- 新建节目、导入/导出、发布（到播放盒/云服务器）、打折发布
- 兼容性校验（分辨率、码率、格式、窗口类型支持情况）

### 排程管理（`ScheduleManager`，177 条）
- 节目排程 / 指令排程 / 查看排程
- 节目项：优先级、节目名、开始/结束时间、有效星期、有效期、插播/轮播/垫播
- 指令：播放节目、休眠、唤醒、重启、亮度控制、音量控制、HDMI 信号切换等

## 4. 视觉品牌（由安装包位图观察）

`$PLUGINSDIR/bg.bmp`（960×720）：
- 顶部大面积**蓝紫渐变**（约 `#6C5CE7` → `#4A6CF7`），白色云朵 + "PlayerMaster" 标识
- 中央白色大字："显示屏网络管理系统"
- 下半部白色内容区
→ 复刻据此采用蓝紫渐变顶栏 + 白色卡片式内容区。

## 5. 复刻实现（与证据的对应）

工程：`player-master/`（Rust + NSH 0.4，纯 Rust UI，无 TSX）

| 原版（证据） | 复刻实现 |
|---|---|
| 云/局域网双模式 | 顶栏 `mode_button` 切换 + 状态栏文案 |
| 四大导航 | 左侧 `sidebar`：`设备管理/节目管理/排程管理/节目编辑` + 软件设置 |
| 设备信息/操作按钮 | 设备管理页统计卡 + 终端列表（名称/IP/在线/正在播放） |
| 节目窗口类型 | 节目编辑页左侧 6 类窗口 + 预览画布 |
| 节目管理表格 | 节目管理页名称/分辨率/节目页/编辑时间/操作 |
| 排程三种页签 | 排程管理页节目排程/指令排程/查看排程 |
| 关于文案 | 设置页"编译序号 338 · 卡莱特云科技股份有限公司" |

## 6. 局限与说明

- 静态分析；未运行原程序，未做动态行为验证。
- 复刻的是界面与信息架构骨架，不含与真实 LED 播放盒通信的私有协议实现。
- 本分析用于合法互操作与学习；不得用于规避授权或侵犯原厂商权益。

## 7. 深度反编译（Ghidra 12.2，后续补做完成）

先前代理 SSL 失败已解决：改用 `curl -L`（跟随 302 至 release-assets CDN）+ 7890 代理全新下载，成功取得 543 MB 安装包；另装 Temurin JDK 25，并从源码编译 macOS arm64 原生反编译器（`src/decompile/cpp` 的 `make ghidra_opt`，输出 `os/mac_arm_64/decompile`，Mach-O arm64）。因宿主限制 `ps`（REA 的进程准入检查 `baseline_unavailable`），改为直接调用 `analyzeHeadless` + 自定义 post-script，成功完成深度分析。

**产物**（`rea-analysis/ghidra-decompiled/`）：

| 项 | 结果 |
|---|---|
| 识别函数总数 | **3,158** |
| 恢复出符号名/类签名的函数 | **1,480**（C 伪代码中含明确类名者 1,404） |
| 成功反编译为 C 伪代码 | **2,026** 个函数（0 失败） |
| `functions.tsv` | 函数名 / 入口地址 / 大小 / 原型 |
| `c/*.c` | 逐函数 Ghidra C 伪代码 |

**关键发现（函数名由 RTTI/MFC 符号恢复，非猜测）：**

- 类体系：`CConfigInfo`、`CServerData`、`CConfigSaveAndLoad`、`CCloudPublishDetailInfo`、`CCloudPublishCmdDetailInfo`、`CSchedulePathList`、`CProgramPathList`、`CModuleLanguageTrans`、`IDataManager`。
- 配置/凭据：`CConfigInfo::{GetServerUserName,GetPlayerMasterPsw,SetBasicPassword,GetBasicPassword,SetPlayerMasterPsw,GetPswInfoCfg}`；自动登录 `IsAutoLogin/SetIsAutoLogin`；记住密码 `GetIsRememberPassword`；AP 弱密码检测 `IsWeakApPsw`。
- 服务器：`CServerData::{GetServerAddr,GetServerPassword,AddExtraServer,SetTestServer,GetUServer,GetLocalServer,GetFtpServer}`；HTTP 配置 `GetHttpMode/GetHttpProtocol/GetHttpRootPath`。
- 加密：`GetHasEncryption/SetHasEncryption`、`SetOpenEncryption`、`SetLanEncryptionHeader/GetLanEncryptionHeader`（局域网加密头）、`GetLanEncryptionFilePath`。
- 云发布：`SetCloudPublishInfo`、`CCloudPublishDetailInfo`、`CCloudPublishCmdDetailInfo` —— 印证云端发布功能。
- 目录布局：`GetPlayerMasterConfigDir/ProgramDir/ScheduleDir`、`GetUserConfigPath/UserInfoConfigPath/UserLanDataConfigPath`。
- 最大函数 `FUN_00408090`（468 行）：涉及 `CModuleLanguageTrans` + `IDataManager` + `HDC` 绘制，位于多语言/界面渲染路径。

示例证据（`GetServerAddr`，MFC 人可读签名被还原）：

```c
/* public: class ATL::CStringT<wchar_t,...> __thiscall CServerData::GetServerAddr(void) */
undefined4 __thiscall CServerData::GetServerAddr(CServerData *this) {
    Ordinal_280(this + 8, 0);   // 从对象偏移 0x8 取服务器地址成员
    return in_stack_00000004;
}
```

> 说明：Ghidra 引擎本身全部检查通过；仅 REA 的封装在此宿主因 `ps` 受限无法调用，故直接驱动引擎。函数级结果仅用于合法互操作与界面复刻研究。
