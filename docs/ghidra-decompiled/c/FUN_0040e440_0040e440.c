
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040e440(void *this,int param_1)

{
  BOOL BVar1;
  HMONITOR hMonitor;
  float fVar2;
  tagMONITORINFO *lpmi;
  int local_68;
  int local_64;
  tagMONITORINFO local_60;
  tagRECT local_24;
  uint local_14;
  
  local_14 = DAT_0046400c ^ (uint)&local_68;
  BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x20));
  if (BVar1 != 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)((int)this + 0x20),&local_24);
    fVar2 = GetDpi();
    local_68 = (int)(fVar2 * _DAT_0044ff44);
    fVar2 = GetDpi();
    local_64 = (int)(fVar2 * _DAT_0044ff48);
    lpmi = &local_60;
    local_60.rcMonitor.left = 0;
    local_60.rcMonitor.top = 0;
    local_60.rcMonitor.right = 0;
    local_60.rcMonitor.bottom = 0;
    local_60.rcWork.left = 0;
    local_60.rcWork.top = 0;
    local_60.rcWork.right = 0;
    local_60.rcWork.bottom = 0;
    local_60.dwFlags = 0;
    local_60.cbSize = 0x28;
    hMonitor = MonitorFromWindow(*(HWND *)((int)this + 0x20),2);
    GetMonitorInfoW(hMonitor,lpmi);
    if ((local_64 != 0) && (local_68 != 0)) {
      *(int *)(param_1 + 0x18) = local_64;
      *(LONG *)(param_1 + 0x20) = local_60.rcWork.right - local_60.rcWork.left;
      *(int *)(param_1 + 0x1c) = local_68;
      *(LONG *)(param_1 + 0x24) = local_60.rcWork.bottom - local_60.rcWork.top;
      Ordinal_3790();
    }
  }
  FUN_0041d025(local_14 ^ (uint)&local_68);
  return;
}

