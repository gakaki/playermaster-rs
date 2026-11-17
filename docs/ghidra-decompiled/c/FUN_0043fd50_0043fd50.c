
undefined4 * FUN_0043fd50(int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int aiStackY_234 [128];
  int iVar3;
  undefined1 auStack_1e [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449530;
  local_10 = ExceptionList;
  local_14 = 0;
  if ((param_1 == 0) || (local_8 = 0xffffffff, param_4 == (undefined1 *)0x0)) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_10;
  piVar1 = FUN_0043c590(&local_14,param_1);
  piVar1 = (int *)*piVar1;
  local_8 = 2;
  FUN_0041f760((int *)(auStack_1e + -6),(int)param_4);
  param_4 = auStack_1e + -10;
  local_8._0_1_ = 3;
  FUN_0041f660((int *)(auStack_1e + -10),param_3);
  local_8._0_1_ = 4;
  FUN_0041f560(aiStackY_234 + 0x82,param_2);
  local_8._0_1_ = 2;
  (**(code **)(*piVar1 + 8))(&param_1);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (local_14 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(local_14 + 4) + 4) + local_14 + 4) + 4))();
  }
  iVar3 = param_1;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))();
  }
  puVar2 = FUN_0041f860(iVar3);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return puVar2;
}

