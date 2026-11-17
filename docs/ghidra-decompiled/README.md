# Ghidra 深度反编译产物

由 Ghidra 12.2 `analyzeHeadless` 对 `PlayerMaster.exe` 做函数级分析后导出。

- `functions.tsv`：3,158 个函数的「名称 / 入口地址 / 大小 / 原型」，其中 1,480 个带符号名。
- `c/*.c`：2,026 个函数的 C 伪代码（Ghidra Decompiler 生成，0 失败）。

关键类：`CConfigInfo`、`CServerData`、`CConfigSaveAndLoad`、`CCloudPublishDetailInfo`、
`CCloudPublishCmdDetailInfo`、`CSchedulePathList`、`CProgramPathList`、`IDataManager`。

环境与复现命令见 `../REA_ANALYSIS_REPORT.md` 第 7 节。仅用于合法互操作与界面复刻研究。
