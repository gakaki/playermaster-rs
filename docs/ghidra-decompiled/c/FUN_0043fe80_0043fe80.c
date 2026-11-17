
undefined4 * FUN_0043fe80(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int aiStackY_238 [128];
  int iVar3;
  undefined1 auStack_1e [2];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449578;
  local_10 = ExceptionList;
  local_14 = 0;
  if (((param_1 == 0) || (param_4 == (int *)0x0)) ||
     (local_8 = 0xffffffff, param_5 == (undefined1 *)0x0)) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_10;
  piVar1 = FUN_0043c590(&local_14,param_1);
  piVar1 = (int *)*piVar1;
  local_8 = 3;
  FUN_004253c0((int *)(auStack_1e + -6),(int)param_5);
  param_5 = auStack_1e + -10;
  local_8._0_1_ = 4;
  FUN_0041f760((int *)(auStack_1e + -10),(int)param_4);
  param_4 = aiStackY_238 + 0x83;
  local_8._0_1_ = 5;
  FUN_0041f660(aiStackY_238 + 0x83,param_3);
  local_8._0_1_ = 6;
  FUN_0041f560(aiStackY_238 + 0x82,param_2);
  local_8._0_1_ = 3;
  (**(code **)(*piVar1 + 0x14))(&param_1);
  local_8 = CONCAT31(local_8._1_3_,8);
  if (local_14 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(local_14 + 4) + 4) + local_14 + 4) + 4))();
  }
  iVar3 = param_1;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))();
  }
  puVar2 = FUN_0043fb80(iVar3);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return puVar2;
}

