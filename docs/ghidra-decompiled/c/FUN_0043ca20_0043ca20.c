
void __thiscall FUN_0043ca20(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int local_3c [3];
  undefined1 local_2d;
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
  puStack_c = &LAB_00448f90;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_3c + 0xe);
  ExceptionList = &local_10;
  local_3c[2] = param_2;
  local_3c[1] = 0;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (undefined4 *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    local_18 = 0;
    local_2c = &PTR_FUN_0044bd28;
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_8 = 3;
    piVar1 = FUN_0043c590(local_3c,param_1);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 4;
    FUN_0041f560(local_3c + -6,local_3c[2]);
    local_2d = (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_3c[0] != 0) {
      (**(code **)(*(int *)(local_3c[0] + 4 + *(int *)(*(int *)(local_3c[0] + 4) + 4)) + 4))();
    }
    *param_3 = local_28;
    param_3[1] = uStack_24;
    param_3[2] = uStack_20;
    param_3[3] = uStack_1c;
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_3c + 0xe));
  return;
}

