
void __thiscall FUN_0043d470(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int local_34 [2];
  undefined **local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449140;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_34 + 0xc);
  ExceptionList = &local_10;
  local_34[1] = 0;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_3 != (undefined4 *)0x0) {
      local_18 = 0;
      local_2c = &PTR_FUN_0044bd28;
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      local_8 = 3;
      piVar1 = FUN_0043c590(local_34,param_1);
      piVar1 = (int *)*piVar1;
      local_8._0_1_ = 4;
      FUN_0041f560(local_34 + -5,param_2);
      (**(code **)(*piVar1 + 0x18))();
      local_8 = CONCAT31(local_8._1_3_,3);
      if (local_34[0] != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(local_34[0] + 4) + 4) + local_34[0] + 4) + 4))();
      }
    }
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_34 + 0xc));
  return;
}

