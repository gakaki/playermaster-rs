
undefined4 * FUN_00434ae0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448710;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  local_14 = 0;
  local_8 = 0xffffffff;
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_10;
  piVar2 = FUN_0043c590(&local_14,param_1);
  local_8 = 1;
  (**(code **)(*(int *)*piVar2 + 0x20))(&param_1,uVar1);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (local_14 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(local_14 + 4) + 4) + local_14 + 4) + 4))();
  }
  iVar4 = param_1;
  if (param_1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))();
  }
  puVar3 = FUN_004340c0(iVar4);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return puVar3;
}

