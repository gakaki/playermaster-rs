
undefined4 FUN_0040c3a0(undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004464d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_00464e48 != 0) {
    Ordinal_280(&param_1,DAT_0046400c ^ (uint)(local_14 + 0x10));
    iVar1 = DAT_00464e48;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(int *)(DAT_00464e48 + 0xc) != 0) {
      Ordinal_280(local_14,extraout_ECX);
      uVar2 = (**(code **)(**(int **)(iVar1 + 0xc) + 0x30))();
      Ordinal_1042();
      goto LAB_0040c423;
    }
    Ordinal_1042();
  }
  uVar2 = 0x80004005;
LAB_0040c423:
  Ordinal_1042();
  ExceptionList = local_10;
  return uVar2;
}

