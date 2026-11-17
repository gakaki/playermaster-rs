
void __fastcall FUN_0040a160(int param_1,int param_2)

{
  uint uVar1;
  HRGN pHVar2;
  undefined **local_34;
  HRGN local_30;
  undefined **local_2c;
  HRGN local_28;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446050;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  local_14 = uVar1;
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_24);
  local_28 = (HRGN)0x0;
  local_2c = CRgn::vftable;
  local_8 = 0;
  pHVar2 = CreateRoundRectRgn(local_24.left,local_24.top,local_24.right + 1,local_24.bottom + 1,
                              param_2,param_2);
  Ordinal_2480(pHVar2,uVar1);
  local_30 = (HRGN)0x0;
  local_34 = CRgn::vftable;
  local_8._0_1_ = 1;
  local_24.top = local_24.top + param_2 / 2;
  pHVar2 = CreateRectRgnIndirect(&local_24);
  Ordinal_2480(pHVar2);
  CombineRgn(local_28,local_28,local_30,2);
  SetWindowRgn(*(HWND *)(param_1 + 0x20),local_28,1);
  local_8 = (uint)local_8._1_3_ << 8;
  local_34 = CRgn::vftable;
  FUN_00405d20(&local_34);
  local_8 = 0xffffffff;
  local_2c = CRgn::vftable;
  FUN_00405d20(&local_2c);
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (int)register0x00000010 - 4U);
  return;
}

