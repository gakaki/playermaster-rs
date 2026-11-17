
void FUN_004400e0(int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  int aiStackY_238 [128];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_5;
  puStack_c = &LAB_004495f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 != 0) && (param_4 != 0)) {
    local_8 = 0xffffffff;
    if (param_5 != (uint *)0x0) {
      uVar1 = *param_5;
      piVar3 = FUN_0043c590((int *)&param_5,param_1);
      piVar3 = (int *)*piVar3;
      local_8 = 3;
      FUN_0041f760(aiStackY_238 + 0x84,param_4);
      local_8._0_1_ = 4;
      FUN_0041f660(aiStackY_238 + 0x83,param_3);
      local_8._0_1_ = 5;
      FUN_0041f560(aiStackY_238 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(*piVar3 + 0x1c))();
      local_8 = 0xffffffff;
      if (param_5 != (uint *)0x0) {
        (**(code **)(*(int *)((int)param_5 + *(int *)(param_5[1] + 4) + 4) + 4))();
      }
      *puVar2 = (uint)(uVar1 != 0);
    }
  }
  ExceptionList = local_10;
  return;
}

