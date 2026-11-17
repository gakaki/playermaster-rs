
undefined1 __thiscall
FUN_0043ebc0(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            undefined1 *param_6,int param_7,int param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iStack_54;
  uint uStack_50;
  int *piStack_4c;
  undefined1 auStack_3a [2];
  int local_2c [3];
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004493f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  iVar2 = param_7;
  puVar1 = param_6;
  if (((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) ||
      ((param_6 != (undefined1 *)0x0 && (param_7 == 0)))) || (param_8 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_8 = 5;
  if ((param_6 != (undefined1 *)0x0) && (puVar5 = (undefined1 *)0x0, param_6 != (undefined1 *)0x0))
  {
    do {
      FUN_0043dfd0((int *)&param_6,*(int *)(iVar2 + (int)puVar5 * 4));
      local_8._0_1_ = 6;
      FUN_0043e130(local_2c,(int *)&param_6);
      local_8 = CONCAT31(local_8._1_3_,5);
      if (param_6 != (undefined1 *)0x0) {
        (**(code **)(*(int *)(param_6 + *(int *)(*(int *)(param_6 + 4) + 4) + 4) + 4))();
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 < puVar1);
  }
  piVar4 = FUN_0043c590(&param_1,param_1);
  piVar4 = (int *)*piVar4;
  param_6 = auStack_3a + -6;
  local_8._0_1_ = 7;
  piStack_4c = (int *)0x43ece3;
  FUN_0043ded0((int *)(auStack_3a + -6),param_8);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_1c = param_4;
  local_18 = '\0';
  piStack_4c = local_2c + 3;
  local_8._0_1_ = 9;
  uStack_50 = (uint)(param_3 != 0);
  FUN_0041f560(&iStack_54,param_2);
  local_8 = CONCAT31(local_8._1_3_,10);
  uVar3 = (**(code **)(*piVar4 + 0x18))();
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (local_1c != 0) {
    if (local_18 != '\0') {
      cef_string_utf16_clear(local_1c);
      Ordinal_1508(local_1c);
    }
    local_1c = 0;
    local_18 = '\0';
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  local_8 = 0xffffffff;
  FUN_0043e0d0(local_2c);
  ExceptionList = local_10;
  return uVar3;
}

