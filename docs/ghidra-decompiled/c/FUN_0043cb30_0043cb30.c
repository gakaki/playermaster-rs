
void __thiscall FUN_0043cb30(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int local_54 [2];
  undefined **local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448fd0;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_54 + 0x14);
  ExceptionList = &local_10;
  local_54[1] = 0;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == 0)) || (local_8 = 0xffffffff, param_3 == (undefined4 *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    memset(local_54 + 3,0,0x30);
    local_4c = &PTR_FUN_0044bd28;
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    local_8 = 3;
    local_38 = param_3[4];
    uStack_34 = param_3[5];
    uStack_30 = param_3[6];
    uStack_2c = param_3[7];
    local_18 = param_3;
    local_28 = param_3[8];
    uStack_24 = param_3[9];
    uStack_20 = param_3[10];
    uStack_1c = param_3[0xb];
    piVar1 = FUN_0043c590(local_54,param_1);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 4;
    FUN_0041f560(local_54 + -6,param_2);
    (**(code **)(*piVar1 + 0x10))();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_54[0] != 0) {
      (**(code **)(*(int *)(local_54[0] + 4 + *(int *)(*(int *)(local_54[0] + 4) + 4)) + 4))();
    }
    FUN_0043c530(local_54 + 2,param_3);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_54 + 0x14));
  return;
}

