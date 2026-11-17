
undefined1 FUN_00435020(int param_1,int param_2,undefined1 *param_3,undefined4 param_4,int *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int aiStackY_238 [128];
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_00447bc8;
  local_10 = ExceptionList;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) && (local_8 = 0xffffffff, param_5 != (int *)0x0)) {
      ExceptionList = &local_10;
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_1e + -6;
      local_8 = 4;
      FUN_00423ea0((int *)(auStack_1e + -6),(int)param_5);
      local_8._0_1_ = 5;
      param_5 = aiStackY_238 + 0x83;
      FUN_0041f660(aiStackY_238 + 0x83,(int)puVar1);
      local_8._0_1_ = 6;
      FUN_0041f560(aiStackY_238 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,4);
      uVar2 = (**(code **)(*piVar3 + 0x38))();
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

