
void __thiscall
FUN_00438a80(void *this,int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447f68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if (((param_1 != 0) && (param_2 != 0)) && (local_8 = 0xffffffff, param_4 != 0)) {
    uStack_28 = 0x438ae2;
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 3;
    uStack_28 = param_5;
    iStack_2c = param_4;
    uStack_30 = param_3;
    FUN_0041f560(&iStack_34,param_2);
    (**(code **)(*piVar1 + 4))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

