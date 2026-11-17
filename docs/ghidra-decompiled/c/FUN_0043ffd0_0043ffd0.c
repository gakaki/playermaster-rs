
undefined4 FUN_0043ffd0(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int aiStackY_234 [128];
  undefined1 auStack_1a [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004495c0;
  local_10 = ExceptionList;
  if (((param_1 == 0) || (param_4 == (int *)0x0)) ||
     (local_8 = 0xffffffff, param_5 == (undefined1 *)0x0)) {
    return 1;
  }
  ExceptionList = &local_10;
  piVar1 = FUN_0043c590(&param_1,param_1);
  piVar1 = (int *)*piVar1;
  local_8 = 3;
  FUN_0043dcd0((int *)(auStack_1a + -6),(int)param_5);
  param_5 = auStack_1a + -10;
  local_8._0_1_ = 4;
  FUN_0041f760((int *)(auStack_1a + -10),(int)param_4);
  param_4 = aiStackY_234 + 0x83;
  local_8._0_1_ = 5;
  FUN_0041f660(aiStackY_234 + 0x83,param_3);
  local_8._0_1_ = 6;
  FUN_0041f560(aiStackY_234 + 0x82,param_2);
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar2 = (**(code **)(*piVar1 + 4))();
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar2;
}

