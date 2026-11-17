
void __thiscall
FUN_0043d0c0(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int iStack_70;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
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
  puStack_c = &LAB_004490c0;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_30 = 0;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if ((((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) &&
      (local_8 = 0xffffffff, param_3 != 0)) &&
     ((local_8 = 0xffffffff, param_4 == 0 || (param_5 != (undefined4 *)0x0)))) {
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8._1_3_ = 0;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      local_18 = 0;
      local_2c = &PTR_FUN_0044bd28;
      local_28 = *param_5;
      uStack_24 = param_5[1];
      uStack_20 = param_5[2];
      uStack_1c = param_5[3];
      local_8._0_1_ = 6;
      FUN_0043c870(&local_3c,(uint)&local_2c);
      param_5 = param_5 + 4;
    }
    local_8._0_1_ = 5;
    iStack_70 = 0x43d1d5;
    piVar1 = FUN_0043c590(&local_40,param_1);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 7;
    FUN_0041f560(&iStack_70,param_2);
    (**(code **)(*piVar1 + 0x34))();
    local_8 = CONCAT31(local_8._1_3_,5);
    if (local_40 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(local_40 + 4) + 4) + local_40 + 4) + 4))();
    }
    FUN_0043c430(&local_3c);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (int)register0x00000010 - 4U);
  return;
}

