
undefined1 __thiscall
FUN_004354a0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_30;
  uint uStack_2c;
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
  uStack_2c = 0x43550b;
  piVar3 = FUN_0043c590(&param_1,param_1);
  puVar1 = (undefined4 *)*piVar3;
  local_8 = 2;
  uStack_2c = (uint)(param_3 != 0);
  FUN_0042fb80(&iStack_30,param_2);
  uVar2 = (**(code **)*puVar1)();
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar2;
}

