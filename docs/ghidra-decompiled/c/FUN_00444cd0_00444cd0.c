
undefined1 __thiscall FUN_00444cd0(void *this,int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449a68;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if (param_1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  piVar3 = FUN_0043c590(&param_1,param_1);
  local_8 = 1;
  uVar1 = (*(code *)**(undefined4 **)*piVar3)(uVar2);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar1;
}

