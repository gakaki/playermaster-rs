
void FUN_00424890(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004493a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_8 = 2;
    FUN_00422640((int *)((int)register0x00000010 + -0x20),param_2);
    (**(code **)*puVar1)();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

