# PlayerMaster 跨平台复刻（Rust + NSH，无 TSX）

依据 REA 对 `PlayerMaster_Setup_1.9.338.exe` 的逆向分析结果，用 Rust + Native Shell（nsh.dev）复刻卡莱特 PlayerMaster 的界面与主要功能骨架。

## 技术栈

- **Rust 2024** + `nsh-core` / `nsh-base` 0.4（纯 Rust UI，无 TSX、无 QuickJS）
- **NSH 原生后端**：macOS 用 AppKit；同一份组件可跑 Windows/GTK；移动端走 Android/iOS 后端
- **GPUI 适配**：`nsh-platform-gpui` 提供 `AppView`，可把本 App 嵌入 GPUI / GPUI Kit 应用
- 全局工具链：`/Users/g/.local/share/devtools`（source `env.sh` 载入）

## 逆向依据（REA Evidence）

- 安装程序：NSIS-Park-3 Unicode，LZMA 压缩，18017 个文件
- 主程序：`PlayerMaster.exe`（PE32/x86，sha256 `28c237311d205845ee9adb43eb9b998c374d37ca9d6e67217acf6bc624af8156`）
- 技术栈：MFC 2013（mfc120u.dll）+ CEF（libcef.dll）+ SDL2 + GDI+ + sqlite3
- 模块化架构：`DMUI.dll`（设备管理）、`PMUI.dll`（节目/媒体库）、`SMUI.dll`（排程）、`PEUI.dll`（节目编辑）、`DeviceControl.dll`、`ProgramControl.dll`、`ScheduleControl.dll`
- UI 文案：`Language/{DeviceManager,Player,ProgramEdit,ProgramManager,ScheduleManager,Other}/*.ini`（UTF-16）
- 品牌视觉：安装包 `$PLUGINSDIR/bg.bmp`（960×720）蓝紫渐变 + 白色内容区

详见 `docs/REA_ANALYSIS_REPORT.md`、`docs/ui-strings.json`、`docs/network-endpoints.json`。

## 已实现界面

- 顶部品牌栏（蓝紫渐变、云模式/局域网切换、在线状态）
- 左侧主导航：设备管理 / 节目管理 / 排程管理 / 节目编辑 / 软件设置
- 设备管理：统计卡片、终端列表（名称/IP/在线状态/正在播放）
- 节目管理：节目表格（名称/分辨率/节目页/最后编辑/操作）
- 排程管理：节目排程 / 指令排程 / 查看排程
- 节目编辑：窗口类型列表 + 预览画布
- 软件设置：语言、转码、终端控制、缓存、关于

## 构建与运行

```bash
source /Users/g/.local/share/devtools/env.sh
cd /Users/g/Desktop/卡莱特a60云播/player-master
cargo build                 # macOS 原生 AppKit 后端
./target/debug/nsh-app-playermaster

# 或按平台运行（nsh 开发宿主）
nsh run . --target macos
nsh run . --target gpui     # 以 GPUI 后端呈现（嵌入 GPUI/GPUI Kit 的显示方式）
nsh run . --target android  # 需 Android SDK + 设备/模拟器
```

## 持续集成与发布（GitHub Actions）

`.github/workflows/release.yml` 在**每次 push**（分支或 tag）自动执行：

1. 在 macOS runner 上用原生 cargo 编译 **Apple Silicon (arm64)** 与 **Intel (x86_64)** 两个架构的 release 版
   （nsh 系 crate 均为 crates.io 公开包，CI 无需私有 nsh CLI）。
2. **启动冒烟测试**：运行编译产物 5 秒，验证 AppKit 事件循环能正常启动、进程不提前退出。
3. 封装为 `PlayerMaster.app` 并打包成 `PlayerMaster-macos-<arch>.tar.gz`。
4. 发布/更新滚动 Release `latest`（prerelease），把两个架构的压缩包作为资产上传。

产物下载：仓库 Releases 页的 `latest`；本地复现冒烟测试：

```bash
cargo build --release
./target/release/nsh-app-playermaster & PID=$!; sleep 5; kill -0 $PID && echo PASS; kill $PID
```

> 无头 CI 中 AppKit 窗口无法交互，冒烟测试仅验证进程能启动并维持事件循环；GUI 交互需在真实桌面验证。

## 会话记录

完整的用户指令时间线、遇到的问题与修复方式、交付物清单及关键命令，见 [`docs/SESSION_SUMMARY.md`](docs/SESSION_SUMMARY.md)。
