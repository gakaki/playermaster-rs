
void __thiscall FUN_0040e2f0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  tagRECT local_18;
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  GetWindowRect(*(HWND *)((int)this + 0x20),&local_18);
  iVar1 = local_18.right + -6;
  if ((iVar1 < param_1) && (param_2 < local_18.top + 6)) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  iVar2 = local_18.left + 6;
  if ((param_1 < iVar2) && (param_2 < local_18.top + 6)) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  if ((param_1 < iVar2) && (local_18.bottom + -6 < param_2)) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  if ((iVar1 < param_1) && (local_18.bottom + -6 < param_2)) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  if (param_1 < iVar2) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  if (iVar1 < param_1) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  if (param_2 < local_18.top + 6) {
    FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
    return;
  }
  FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
  return;
}

