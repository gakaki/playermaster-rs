
void __thiscall
FUN_0043af90(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
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
    if (param_5 != (undefined4 *)0x0) {
      local_18 = 0;
      local_2c = &PTR_FUN_0044bd28;
      local_28 = *param_5;
      uStack_24 = param_5[1];
      uStack_20 = param_5[2];
      uStack_1c = param_5[3];
      local_8 = 3;
      piStack_4c = (int *)0x43b028;
      piVar2 = FUN_0043c590(local_34,param_1);
      puVar1 = (undefined4 *)*piVar2;
      local_8._0_1_ = 4;
      piStack_4c = local_34 + 2;
      uStack_50 = param_4;
      uStack_54 = param_3;
      FUN_0041f560(&iStack_58,param_2);
      (**(code **)*puVar1)();
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

