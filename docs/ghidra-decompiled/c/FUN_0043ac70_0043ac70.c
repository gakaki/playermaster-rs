
void __thiscall
FUN_0043ac70(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int aiStackY_270 [128];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined **local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448d50;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(aiStackY_270 + 0x9b);
  ExceptionList = &local_10;
  local_38 = param_1;
  local_34 = param_3;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if ((((local_38 != 0) && (local_8 = 0xffffffff, param_2 != 0)) &&
      (local_8 = 0xffffffff, param_3 != 0)) &&
     ((local_8 = 0xffffffff, param_4 == 0 || (param_5 != (undefined4 *)0x0)))) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_8._1_3_ = 0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      local_1c = param_5[4];
      local_2c = *param_5;
      uStack_28 = param_5[1];
      uStack_24 = param_5[2];
      uStack_20 = param_5[3];
      local_18 = 0;
      local_30 = &PTR_FUN_0044bd28;
      local_8._0_1_ = 5;
      FUN_0043adf0(&local_48,(uint)&local_30);
      param_5 = param_5 + 5;
    }
    local_8._0_1_ = 4;
    piVar1 = FUN_0043c590(&local_3c,local_38);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 6;
    FUN_0041f660(aiStackY_270 + 0x83,local_34);
    local_8._0_1_ = 7;
    FUN_0041f560(aiStackY_270 + 0x82,param_2);
    local_8._0_1_ = 6;
    (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_3c != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(local_3c + 4) + 4) + local_3c + 4) + 4))();
    }
    FUN_0043a990(&local_48);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(aiStackY_270 + 0x9b));
  return;
}

