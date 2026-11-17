
void __fastcall FUN_00405d20(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445a9c;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *param_1 = CGdiObject::vftable;
  local_8 = 0;
  Ordinal_3839();
  ExceptionList = local_10;
  FUN_0041d025(uVar1 ^ (int)register0x00000010 - 4U);
  return;
}

