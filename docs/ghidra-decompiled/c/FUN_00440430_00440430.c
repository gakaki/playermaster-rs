
undefined1 FUN_00440430(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int aiStackY_238 [128];
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_5;
  puStack_c = &LAB_004496d0;
  local_10 = ExceptionList;
  if ((param_1 != 0) && (param_4 != (int *)0x0)) {
    local_8 = 0xffffffff;
    if (param_5 != (undefined1 *)0x0) {
      ExceptionList = &local_10;
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_5 = auStack_1e + -6;
      local_8 = 3;
      FUN_004253c0((int *)(auStack_1e + -6),(int)puVar1);
      local_8._0_1_ = 4;
      FUN_0041f760((int *)(auStack_1e + -10),(int)param_4);
      param_4 = aiStackY_238 + 0x83;
      local_8._0_1_ = 5;
      FUN_0041f660(aiStackY_238 + 0x83,param_3);
      local_8._0_1_ = 6;
      FUN_0041f560(aiStackY_238 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar2 = (**(code **)(*piVar3 + 0x10))();
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar2;
    }
  }
  return 0;
}

