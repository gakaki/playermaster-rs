
void __thiscall FUN_0040e140(void *this,int param_1)

{
  uint uVar1;
  HBRUSH pHVar2;
  undefined4 local_34;
  undefined1 local_30 [20];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00446798;
  local_14 = ExceptionList;
  local_1c = DAT_0046400c ^ (uint)&local_34;
  uVar1 = DAT_0046400c ^ (uint)(local_30 + -8);
  ExceptionList = &local_14;
  if (param_1 != 0) {
    GetClientRect(*(HWND *)((int)this + 0x20),(LPRECT)(local_30 + 4));
    local_30._0_4_ = 0;
    local_34 = CBrush::vftable;
    local_c = 0;
    pHVar2 = CreateSolidBrush(0xffffff);
    Ordinal_2480(pHVar2,uVar1);
    FillRect(*(HDC *)(param_1 + 4),(RECT *)local_30,(HBRUSH)local_34);
    Ordinal_3839();
    local_c = 0xffffffff;
    local_34 = CBrush::vftable;
    FUN_00405d20(&local_34);
  }
  ExceptionList = local_14;
  FUN_0041d025(local_1c ^ (uint)&local_34);
  return;
}

