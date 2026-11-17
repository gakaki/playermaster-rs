
void __thiscall FUN_0043b920(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iStack_60;
  int local_40;
  undefined1 local_39;
  undefined **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448e20;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    local_38 = &PTR_FUN_0044bd28;
    local_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    local_1c = 0;
    local_24 = 0;
    local_18 = 0;
    local_8 = 3;
    iStack_60 = 0x43b9c1;
    FUN_0043b8d0(&local_38,param_3);
    iStack_60 = 0x43b9cb;
    piVar1 = FUN_0043c590(&local_40,param_1);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 4;
    FUN_0041f560(&iStack_60,param_2);
    local_39 = (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_40 != 0) {
      (**(code **)(*(int *)(local_40 + 4 + *(int *)(*(int *)(local_40 + 4) + 4)) + 4))();
    }
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (int)register0x00000010 - 4U);
  return;
}

