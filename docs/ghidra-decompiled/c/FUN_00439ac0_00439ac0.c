
undefined1 __thiscall FUN_00439ac0(void *this,int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 0) {
      local_8 = 3;
      piVar2 = FUN_0043c590(&param_1,param_1);
      piVar2 = (int *)*piVar2;
      local_8._0_1_ = 4;
      FUN_0041f560((int *)((int)register0x00000010 + -0x38),param_2);
      uVar1 = (**(code **)(*piVar2 + 0x1c))();
      local_8 = CONCAT31(local_8._1_3_,3);
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

