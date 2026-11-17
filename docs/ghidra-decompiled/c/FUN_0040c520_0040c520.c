
undefined4 FUN_0040c520(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446532;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (DAT_00464e48 != 0) {
    Ordinal_280(&param_2,DAT_0046400c ^ (uint)(local_14 + 0x10));
    iVar1 = DAT_00464e48;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(int *)(DAT_00464e48 + 0xc) != 0) {
      Ordinal_280(local_14,extraout_ECX);
      uVar2 = (**(code **)(**(int **)(iVar1 + 0xc) + 0x34))(param_1);
      Ordinal_1042();
      goto LAB_0040c5a3;
    }
    Ordinal_1042();
  }
  uVar2 = 0;
LAB_0040c5a3:
  Ordinal_1042();
  ExceptionList = local_10;
  return uVar2;
}

