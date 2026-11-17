
void __thiscall
FUN_0043d240(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  int *piVar1;
  int iStack_70;
  undefined4 uStack_6c;
  int *piStack_68;
  int iStack_64;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449108;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_30 = param_6;
  local_38 = 0;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if ((((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) &&
      ((local_8 = 0xffffffff, param_4 == 0 || (param_5 != (undefined4 *)0x0)))) &&
     (local_8 = 0xffffffff, local_30 != 0)) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_8._1_3_ = 0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      local_18 = 0;
      local_2c = &PTR_FUN_0044bd28;
      local_28 = *param_5;
      uStack_24 = param_5[1];
      uStack_20 = param_5[2];
      uStack_1c = param_5[3];
      local_8._0_1_ = 5;
      FUN_0043c870(&local_44,(uint)&local_2c);
      param_5 = param_5 + 4;
    }
    local_8._0_1_ = 4;
    iStack_64 = 0x43d335;
    piVar1 = FUN_0043c590(&local_34,param_1);
    piVar1 = (int *)*piVar1;
    piStack_68 = &local_44;
    local_8._0_1_ = 6;
    iStack_64 = local_30;
    uStack_6c = param_3;
    FUN_0041f560(&iStack_70,param_2);
    (**(code **)(*piVar1 + 0x1c))();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_34 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(local_34 + 4) + 4) + local_34 + 4) + 4))();
    }
    FUN_0043c430(&local_44);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (int)register0x00000010 - 4U);
  return;
}

