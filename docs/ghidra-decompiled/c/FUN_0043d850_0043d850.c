
undefined1 __thiscall
FUN_0043d850(void *this,int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_30;
  int iStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004491c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  piVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_3 != (int *)0x0) {
      iStack_2c = 0x43d8c9;
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      local_8 = 3;
      iStack_2c = param_4;
      param_3 = &iStack_30;
      FUN_004363b0(&iStack_30,(int)piVar1);
      local_8._0_1_ = 4;
      FUN_0041f560((int *)((int)register0x00000010 + -0x34),param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar2 = (**(code **)(*piVar3 + 0x28))();
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

