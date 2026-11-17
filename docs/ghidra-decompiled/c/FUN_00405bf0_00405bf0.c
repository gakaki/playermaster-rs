
void __thiscall FUN_00405bf0(void *this,int param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  tagRECT local_18;
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  iVar1 = Ordinal_4843(this);
  pHVar2 = GetParent(*(HWND *)(iVar1 + 0x20));
  iVar1 = Ordinal_4843(pHVar2);
  if (iVar1 == 0) {
    iVar3 = GetSystemMetrics(0x3d);
    iVar1 = GetSystemMetrics(0x3e);
    iVar1 = (iVar1 - param_2) / 2;
    iVar3 = (iVar3 - param_1) / 2;
  }
  else {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(iVar1 + 0x20),&local_18);
    iVar1 = ((local_18.bottom - local_18.top) - param_2) / 2 + local_18.top;
    iVar3 = ((local_18.right - local_18.left) - param_1) / 2 + local_18.left;
  }
  MoveWindow(this,iVar3,iVar1,param_1,param_2,0x40);
  FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
  return;
}

