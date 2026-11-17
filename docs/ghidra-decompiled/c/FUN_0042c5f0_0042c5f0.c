
void __thiscall
FUN_0042c5f0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iStack_2c;
  uint uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004493a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    uStack_28 = 0x42c645;
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_8 = 2;
    uStack_28 = (uint)(param_3 != 0);
    FUN_0041f560(&iStack_2c,param_2);
    (**(code **)*puVar1)();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

