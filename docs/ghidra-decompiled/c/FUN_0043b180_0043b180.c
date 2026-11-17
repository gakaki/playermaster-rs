
undefined1 __thiscall FUN_0043b180(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448e98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 == 0) || (local_8 = 0xffffffff, param_2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  piVar2 = FUN_0043c590(&param_1,param_1);
  piVar2 = (int *)*piVar2;
  local_8 = 2;
  FUN_0041f560((int *)((int)register0x00000010 + -0x28),param_2);
  uVar1 = (**(code **)(*piVar2 + 4))();
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar1;
}

