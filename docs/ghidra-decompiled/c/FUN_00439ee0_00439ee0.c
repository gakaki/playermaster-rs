
void __thiscall FUN_00439ee0(void *this,int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004493a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    iStack_28 = 0x439f35;
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 2;
    FUN_0041f560(&iStack_28,param_2);
    (**(code **)(*piVar1 + 0x20))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

