//! PlayerMaster 跨平台复刻 —— Rust + NSH 原生 UI（无 TSX、无 QuickJS）
//!
//! 依据 REA 对 PlayerMaster_Setup_1.9.338.exe 的逆向结果复刻：
//!   - 品牌视觉：蓝紫渐变 + 白色内容区（取自安装包安装界面位图）
//!   - 四大模块：设备管理 / 节目管理 / 排程管理 / 节目编辑
//!   - 双模式：云模式 / 局域网模式
//! 文案来自安装包内 Language/*/Multi_chi.ini 的原始字符串表。

use nsh_core::prelude::*;
use nsh_core::color::hsla;

/// 卡片容器的公共样式
macro_rules! card {
    ($v:expr) => { $v.bg(surface()).rounded(px(12.0)).border(px(1.0)).border_color(line()).p_5() };
}


// ---------- 品牌配色（取自原版蓝紫渐变） ----------
fn brand() -> Hsla { hsla(0.63, 0.88, 0.55, 1.0) }
fn brand_light() -> Hsla { hsla(0.67, 0.85, 0.66, 1.0) }
fn ink() -> Hsla { hsla(0.62, 0.24, 0.16, 1.0) }
fn sub_ink() -> Hsla { hsla(0.60, 0.10, 0.45, 1.0) }
fn line() -> Hsla { hsla(0.62, 0.28, 0.90, 1.0) }
fn surface() -> Hsla { hsla(0.0, 0.0, 1.0, 1.0) }
fn canvas() -> Hsla { hsla(0.65, 0.30, 0.97, 1.0) }
fn row_bg() -> Hsla { hsla(0.65, 0.30, 0.965, 1.0) }
fn online() -> Hsla { hsla(0.38, 0.70, 0.45, 1.0) }
fn warning() -> Hsla { hsla(0.05, 0.70, 0.50, 1.0) }
fn muted() -> Hsla { hsla(0.60, 0.05, 0.60, 1.0) }

#[native_module("playermaster/native")]
fn native(registry: &mut Registry) {
    registry.register::<App>();
}

// ---------- 应用状态 ----------
#[derive(Clone, Copy, PartialEq, Eq)]
enum Tab { Devices, Programs, Schedules, Editor, Settings }

#[derive(Clone, Copy, PartialEq, Eq)]
enum NetMode { Cloud, Lan }

fn tab_title(t: Tab) -> &'static str {
    match t {
        Tab::Devices => "设备管理",
        Tab::Programs => "节目管理",
        Tab::Schedules => "排程管理",
        Tab::Editor => "节目编辑",
        Tab::Settings => "软件设置",
    }
}

/// 应用根组件
#[component]
pub fn App() -> impl IntoElement {
    let tab = signal(Tab::Devices);
    let mode = signal(NetMode::Cloud);

    view()
        .flex_1()
        .flex_col()
        .bg(canvas())
        .text_color(ink())
        .child(brand_header(mode))
        .child(
            view()
                .flex_1()
                .flex_row()
                .child(sidebar(tab))
                .child(
                    view()
                        .flex_1()
                        .flex_col()
                        .child(scroll().flex_1().child(page_header(tab)).child(content(tab)))
                )
        )
        .child(status_bar(mode))
}

fn page_header(tab: Signal<Tab>) -> impl IntoElement {
    view().p_6().pb_3()
        .child(text(move || tab_title(tab.get())).text_size(px(22.0)).font_weight(FontWeight::SEMIBOLD))
        .child(text("Colorlight PlayerMaster · 显示屏网络管理系统").text_size(px(13.0)).text_color(sub_ink()).mt_1())
}

/// 顶部品牌栏
fn brand_header(mode: Signal<NetMode>) -> impl IntoElement {
    view().w_full().h(px(84.0)).px_6().flex_row().items_center().gap_4().bg(brand())
        .child(view().w(px(40.0)).h(px(40.0)).rounded(px(12.0)).bg(surface())
            .items_center().justify_center().child(text("云").text_size(px(20.0)).text_color(brand())))
        .child(view().flex_col()
            .child(text("PlayerMaster").text_size(px(20.0)).font_weight(FontWeight::BOLD).text_color(surface()))
            .child(text("显示屏网络管理系统").text_size(px(11.0)).text_color(hsla(0.0,0.0,1.0,0.85))))
        .child(view().flex_1())
        .child(view().flex_row().gap_2().items_center()
            .child(mode_button(mode, NetMode::Cloud, "云模式"))
            .child(mode_button(mode, NetMode::Lan, "局域网")))
        .child(view().flex_row().items_center().gap_2().ml_4()
            .child(view().w(px(8.0)).h(px(8.0)).rounded_full().bg(online()))
            .child(text("在线").text_size(px(13.0)).text_color(surface())))
}

fn mode_button(mode: Signal<NetMode>, target: NetMode, label: &'static str) -> impl IntoElement {
    let active = move || mode.get() == target;
    view().px_4().py_2().rounded(px(8.0))
        .bg(move || if active() { surface() } else { hsla(0.0,0.0,1.0,0.18) })
        .cursor_pointer().on_press(move || mode.set(target))
        .child(text(label).text_size(px(13.0)).font_weight(FontWeight::MEDIUM)
            .text_color(move || if active() { brand() } else { surface() }))
}

/// 左侧主导航
fn sidebar(tab: Signal<Tab>) -> impl IntoElement {
    view().w(px(210.0)).h_full().bg(surface()).border_r(px(1.0)).border_r_color(line())
        .p_4().flex_col().gap_2()
        .child(nav_item(tab, Tab::Devices, "▣", "设备管理"))
        .child(nav_item(tab, Tab::Programs, "▤", "节目管理"))
        .child(nav_item(tab, Tab::Schedules, "◷", "排程管理"))
        .child(nav_item(tab, Tab::Editor, "✎", "节目编辑"))
        .child(view().flex_1())
        .child(nav_item(tab, Tab::Settings, "⚙", "软件设置"))
}

fn nav_item(tab: Signal<Tab>, target: Tab, icon: &'static str, label: &'static str) -> impl IntoElement {
    let active = move || tab.get() == target;
    view().flex_row().items_center().gap_3().px_4().py_3().rounded(px(10.0))
        .bg(move || if active() { brand() } else { hsla(0.0,0.0,1.0,0.0) })
        .cursor_pointer().on_press(move || tab.set(target))
        .child(text(icon).text_size(px(18.0)).text_color(move || if active() { surface() } else { sub_ink() }))
        .child(text(label).text_size(px(14.0)).font_weight(FontWeight::MEDIUM)
            .text_color(move || if active() { surface() } else { ink() }))
}

fn content(tab: Signal<Tab>) -> impl IntoElement {
    view().flex_col().gap_4().px_6().pb_6()
        .child(when(move || tab.get() == Tab::Devices, || device_page()))
        .child(when(move || tab.get() == Tab::Programs, || program_page()))
        .child(when(move || tab.get() == Tab::Schedules, || schedule_page()))
        .child(when(move || tab.get() == Tab::Editor, || editor_page()))
        .child(when(move || tab.get() == Tab::Settings, || settings_page()))
}

// ---------- 设备管理 ----------
fn device_page() -> impl IntoElement {
    let mut list = view().flex_col().gap_2();
    let devices = [
        ("A60 云播播放盒", "192.168.1.108", "在线", "正在播放：欢迎节目"),
        ("A500 播放盒", "192.168.1.112", "在线", "正在播放：日程节目"),
        ("A35 播放盒", "192.168.1.121", "离线", "最后在线：2026-11-17 10:32"),
        ("AX06 播放盒", "192.168.1.135", "在线", "正在播放：天气节目"),
    ];
    for d in devices.iter() {
        list = list.child(device_row(d.0, d.1, d.2, d.3));
    }
    view().flex_col().gap_4()
        .child(view().flex_row().gap_3()
            .child(stat_card("设备总数", "12", brand()))
            .child(stat_card("在线设备", "9", online()))
            .child(stat_card("离线设备", "3", warning()))
            .child(stat_card("正在播放", "7", brand_light())))
        .child(card!(view().flex_col()).gap_3()
            .child(view().flex_row().items_center()
                .child(text("终端列表").text_size(px(16.0)).font_weight(FontWeight::SEMIBOLD))
                .child(view().flex_1())
                .child(toolbar_btn("＋ 添加播放盒"))
                .child(view().w(px(8.0)))
                .child(toolbar_btn("刷新")))
            .child(list))
}

fn stat_card(title: &'static str, value: &'static str, color: Hsla) -> impl IntoElement {
    view().flex_1().bg(surface()).rounded(px(12.0)).border(px(1.0)).border_color(line()).p_4().flex_col().gap_1()
        .child(view().w(px(4.0)).h(px(26.0)).rounded(px(2.0)).bg(color))
        .child(text(value).text_size(px(26.0)).font_weight(FontWeight::BOLD).text_color(color))
        .child(text(title).text_size(px(12.0)).text_color(sub_ink()))
}

fn device_row(name: &'static str, ip: &'static str, state: &'static str, info: &'static str) -> impl IntoElement {
    let is_online = state == "在线";
    view().flex_row().items_center().gap_4().p_3().rounded(px(8.0)).bg(row_bg())
        .child(view().w(px(40.0)).h(px(40.0)).rounded(px(10.0)).bg(brand())
            .items_center().justify_center().child(text("▣").text_size(px(20.0)).text_color(surface())))
        .child(view().flex_col().gap_1()
            .child(text(name).text_size(px(14.0)).font_weight(FontWeight::MEDIUM))
            .child(text(ip).text_size(px(12.0)).text_color(sub_ink())))
        .child(view().flex_1())
        .child(text(info).text_size(px(12.0)).text_color(sub_ink()))
        .child(view().flex_row().items_center().gap_1()
            .child(view().w(px(7.0)).h(px(7.0)).rounded_full().bg(if is_online { online() } else { muted() }))
            .child(text(state).text_size(px(12.0)).text_color(if is_online { online() } else { sub_ink() })))
}

// ---------- 节目管理 ----------
fn program_page() -> impl IntoElement {
    let mut rows = view().flex_col().gap_2();
    let programs = [
        ("欢迎节目", "1920×1080", "3 个节目页", "2026-11-17 09:24"),
        ("产品宣传", "3840×2160", "5 个节目页", "2026-11-16 15:40"),
        ("天气预报", "1920×1080", "2 个节目页", "2026-11-15 11:08"),
        ("通知公告", "1280×720", "1 个节目页", "2026-11-14 17:55"),
    ];
    for p in programs.iter() {
        rows = rows.child(
            view().flex_row().items_center().gap_3().p_3().rounded(px(8.0)).bg(row_bg())
                .child(view().w(px(180.0)).child(text(p.0).text_size(px(14.0)).font_weight(FontWeight::MEDIUM)))
                .child(view().w(px(120.0)).child(text(p.1).text_size(px(13.0)).text_color(sub_ink())))
                .child(view().w(px(110.0)).child(text(p.2).text_size(px(13.0)).text_color(sub_ink())))
                .child(view().w(px(170.0)).child(text(p.3).text_size(px(13.0)).text_color(sub_ink())))
                .child(view().flex_1().child(text("编辑 · 发布").text_size(px(12.0)).text_color(brand())))
        );
    }
    view().flex_col().gap_4()
        .child(view().flex_row()
            .child(toolbar_btn("➕ 新建节目"))
            .child(view().w(px(8.0)))
            .child(toolbar_btn("导入节目..."))
            .child(view().flex_1()))
        .child(card!(view().flex_col()).gap_2()
            .child(table_header())
            .child(rows))
}

fn table_header() -> impl IntoElement {
    view().flex_row().items_center().gap_3().px_3().py_2().rounded(px(8.0)).bg(row_bg())
        .child(view().w(px(180.0)).child(text("节目名称").text_size(px(12.0)).font_weight(FontWeight::MEDIUM).text_color(sub_ink())))
        .child(view().w(px(120.0)).child(text("分辨率").text_size(px(12.0)).font_weight(FontWeight::MEDIUM).text_color(sub_ink())))
        .child(view().w(px(110.0)).child(text("节目页").text_size(px(12.0)).font_weight(FontWeight::MEDIUM).text_color(sub_ink())))
        .child(view().w(px(170.0)).child(text("最后编辑").text_size(px(12.0)).font_weight(FontWeight::MEDIUM).text_color(sub_ink())))
        .child(view().flex_1().child(text("操作").text_size(px(12.0)).font_weight(FontWeight::MEDIUM).text_color(sub_ink())))
}

// ---------- 排程管理 ----------
fn schedule_page() -> impl IntoElement {
    let mut rows = view().flex_col().gap_2();
    let schedules = [
        ("工作日排程", "节目排程", "08:00 - 18:00", "已应用"),
        ("节假日排程", "节目排程", "全天", "已应用"),
        ("定时开关机", "指令排程", "22:00 休眠 / 07:00 唤醒", "已应用"),
        ("亮度自动调节", "指令排程", "按传感器", "未应用"),
    ];
    for s in schedules.iter() {
        rows = rows.child(
            view().flex_row().items_center().gap_4().p_4().rounded(px(8.0)).bg(row_bg())
                .child(text("◷").text_size(px(18.0)).text_color(brand()))
                .child(view().flex_1().flex_col().gap_1()
                    .child(text(s.0).text_size(px(14.0)).font_weight(FontWeight::MEDIUM))
                    .child(text(s.2).text_size(px(12.0)).text_color(sub_ink())))
                .child(text(s.1).text_size(px(12.0)).text_color(sub_ink()))
                .child(text(s.3).text_size(px(12.0)).text_color(if s.3 == "已应用" { online() } else { sub_ink() }))
        );
    }
    view().flex_col().gap_4()
        .child(view().flex_row()
            .child(seg_btn("节目排程", true))
            .child(seg_btn("指令排程", false))
            .child(seg_btn("查看排程", false))
            .child(view().flex_1())
            .child(toolbar_btn("＋ 新建排程")))
        .child(card!(view().flex_col()).gap_2().child(rows))
}

// ---------- 节目编辑 ----------
fn editor_page() -> impl IntoElement {
    let mut list = view().flex_col().gap_2();
    let windows = [
        ("文件窗", "视频 / 图片"),
        ("单行文本窗口", "文字"),
        ("天气预报窗口", "中国气象"),
        ("时钟窗口", "模拟时钟"),
        ("网页窗口", "网页"),
        ("流媒体窗口", "RTSP / RTMP"),
    ];
    for w in windows.iter() {
        list = list.child(
            view().flex_row().items_center().gap_2().p_2().rounded(px(8.0)).bg(row_bg())
                .child(view().w(px(6.0)).h(px(6.0)).rounded_full().bg(brand()))
                .child(view().flex_col()
                    .child(text(w.0).text_size(px(13.0)))
                    .child(text(w.1).text_size(px(11.0)).text_color(sub_ink())))
        );
    }
    view().flex_col().gap_4()
        .child(view().flex_row()
            .child(toolbar_btn("＋ 添加窗口"))
            .child(view().w(px(8.0)))
            .child(toolbar_btn("保存"))
            .child(view().w(px(8.0)))
            .child(toolbar_btn("发布到服务器"))
            .child(view().flex_1()))
        .child(view().flex_row().gap_4()
            .child(view().w(px(260.0)).bg(surface()).rounded(px(12.0)).border(px(1.0)).border_color(line()).p_4().flex_col().gap_2()
                .child(text("窗口类型").text_size(px(15.0)).font_weight(FontWeight::SEMIBOLD))
                .child(list))
            .child(view().flex_1().h(px(360.0)).bg(hsla(0.62,0.25,0.10,1.0)).rounded(px(12.0))
                .border(px(1.0)).border_color(line()).items_center().justify_center().flex_col().gap_2()
                .child(text("▦").text_size(px(48.0)).text_color(hsla(0.62,0.30,0.35,1.0)))
                .child(text("节目预览画布 · 1920 × 1080").text_size(px(14.0)).text_color(hsla(0.62,0.20,0.35,1.0)))))
}

// ---------- 软件设置 ----------
fn settings_page() -> impl IntoElement {
    view().flex_col().gap_3()
        .child(setting_row("语言（Language）", "简体中文"))
        .child(setting_row("上传节目时转码", "开启"))
        .child(setting_row("终端控制配置", "默认"))
        .child(setting_row("缓存目录", "~/Library/Application Support/PlayerMaster/cache"))
        .child(setting_row("关于本产品", "编译序号: 338 · 卡莱特云科技股份有限公司版权所有"))
}

fn setting_row(title: &'static str, value: &'static str) -> impl IntoElement {
    view().flex_row().items_center().p_4().bg(surface()).rounded(px(10.0)).border(px(1.0)).border_color(line())
        .child(text(title).text_size(px(14.0)).font_weight(FontWeight::MEDIUM))
        .child(view().flex_1())
        .child(text(value).text_size(px(13.0)).text_color(sub_ink()))
}

// ---------- 通用小组件 ----------
fn toolbar_btn(label: &'static str) -> impl IntoElement {
    view().px_4().py_2().rounded(px(8.0)).bg(brand()).cursor_pointer()
        .child(text(label).text_size(px(13.0)).font_weight(FontWeight::MEDIUM).text_color(surface()))
}

fn seg_btn(label: &'static str, active: bool) -> impl IntoElement {
    view().px_4().py_2().rounded(px(8.0))
        .bg(if active { brand() } else { hsla(0.0,0.0,0.0,0.0) }).cursor_pointer()
        .child(text(label).text_size(px(13.0)).text_color(if active { surface() } else { sub_ink() }))
}

fn status_bar(mode: Signal<NetMode>) -> impl IntoElement {
    view().w_full().h(px(30.0)).px_6().flex_row().items_center()
        .bg(surface()).border_t(px(1.0)).border_t_color(line())
        .child(text(move || match mode.get() { NetMode::Cloud => "云模式 · 已连接 ColorlightCloud", NetMode::Lan => "局域网模式 · 本地网络" })
            .text_size(px(11.0)).text_color(sub_ink()))
        .child(view().flex_1())
        .child(text("PlayerMaster v1.9.338 · Rust/NSH 复刻").text_size(px(11.0)).text_color(sub_ink()))
}
