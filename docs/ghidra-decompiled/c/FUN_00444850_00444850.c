
void FUN_00444850(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int *piVar1;
  int aiStackY_2fc [128];
  int local_bc;
  undefined **local_b8;
  undefined1 local_b4 [156];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004499d7;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_b4 + 0xb0);
  ExceptionList = &local_10;
  local_bc = param_1;
  if ((((param_1 == 0) || (param_4 == 0)) || (param_5 == 0)) ||
     (local_8 = 0xffffffff, param_6 == (undefined4 *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    local_b8 = &PTR_FUN_0044c274;
    memset(local_b4,0,0x9c);
    local_18 = 0;
    local_8 = 4;
    FUN_00440670(&local_b8,param_6,0);
    piVar1 = FUN_0043c590(&local_bc,local_bc);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 5;
    FUN_004253c0(aiStackY_2fc + 0x85,param_5);
    local_8._0_1_ = 6;
    FUN_0041f760(aiStackY_2fc + 0x84,param_4);
    local_8._0_1_ = 7;
    FUN_0041f660(aiStackY_2fc + 0x83,param_3);
    local_8._0_1_ = 8;
    FUN_0041f560(aiStackY_2fc + 0x82,param_2);
    local_8._0_1_ = 5;
    (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_bc != 0) {
      (**(code **)(*(int *)(local_bc + 4 + *(int *)(*(int *)(local_bc + 4) + 4)) + 4))();
    }
    FUN_004405a0(&local_b8);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_b4 + 0xb0));
  return;
}

