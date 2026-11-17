
void FUN_004449f0(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int aiStackY_2f4 [128];
  int local_bc;
  undefined **local_b8;
  undefined1 local_b4 [156];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449a2c;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_b4 + 0xb0);
  ExceptionList = &local_10;
  local_bc = 0;
  if (((param_1 == 0) || (param_4 == 0)) || (local_8 = 0xffffffff, param_5 == (undefined4 *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    local_b8 = &PTR_FUN_0044c274;
    memset(local_b4,0,0x9c);
    local_18 = 0;
    local_8 = 3;
    FUN_00440670(&local_b8,param_5,0);
    piVar2 = FUN_0043c590(&local_bc,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_8._0_1_ = 4;
    FUN_0041f760(aiStackY_2f4 + 0x84,param_4);
    local_8._0_1_ = 5;
    FUN_0041f660(aiStackY_2f4 + 0x83,param_3);
    local_8._0_1_ = 6;
    FUN_0041f560(aiStackY_2f4 + 0x82,param_2);
    local_8._0_1_ = 4;
    (**(code **)*puVar1)();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_bc != 0) {
      (**(code **)(*(int *)(local_bc + 4 + *(int *)(*(int *)(local_bc + 4) + 4)) + 4))();
    }
    FUN_004405a0(&local_b8);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_b4 + 0xb0));
  return;
}

