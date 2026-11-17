
undefined4 __thiscall
FUN_00437750(void *this,int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int aiStackY_230 [128];
  int iVar3;
  undefined1 auStack_1a [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004488a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == 0)) || (local_8 = 0xffffffff, param_3 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  piVar1 = FUN_0043c590(&param_1,param_1);
  piVar1 = (int *)*piVar1;
  local_8 = 3;
  param_4 = auStack_1a + -10;
  FUN_0041f560((int *)(auStack_1a + -10),param_3);
  local_8._0_1_ = 4;
  FUN_0042faa0(aiStackY_230 + 0x82,param_2);
  local_8._0_1_ = 3;
  (**(code **)(*piVar1 + 0x14))(&local_14);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  iVar3 = local_14;
  if (local_14 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(local_14 + 4) + 4) + local_14 + 4))();
  }
  uVar2 = FUN_00426290(iVar3);
  local_8 = 0xffffffff;
  if (local_14 != 0) {
    (**(code **)(*(int *)(local_14 + 4 + *(int *)(*(int *)(local_14 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar2;
}

