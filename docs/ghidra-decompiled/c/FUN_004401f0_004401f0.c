
void FUN_004401f0(int param_1,int param_2,int param_3,int *param_4,int *param_5,int *param_6,
                 undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int aiStackY_240 [128];
  int iStack_2c;
  int *piStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_1 != 0) && (param_4 != (int *)0x0)) && (local_8 = 0xffffffff, param_5 != (int *)0x0))
  {
    piStack_28 = (int *)0x440259;
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 3;
    piStack_28 = param_6;
    param_6 = &iStack_2c;
    FUN_004253c0(&iStack_2c,(int)param_5);
    param_5 = aiStackY_240 + 0x84;
    local_8._0_1_ = 4;
    FUN_0041f760(aiStackY_240 + 0x84,(int)param_4);
    param_4 = aiStackY_240 + 0x83;
    local_8._0_1_ = 5;
    FUN_0041f660(aiStackY_240 + 0x83,param_3);
    local_8._0_1_ = 6;
    FUN_0041f560(aiStackY_240 + 0x82,param_2);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*piVar1 + 0x18))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

