
void __thiscall
FUN_00428c90(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004493a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    uStack_28 = 0x428ce5;
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 2;
    uStack_28 = param_4;
    uStack_2c = param_3;
    FUN_00421730(&iStack_30,param_2);
    (**(code **)(*piVar1 + 8))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

