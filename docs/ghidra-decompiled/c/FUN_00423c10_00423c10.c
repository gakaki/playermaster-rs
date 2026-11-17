
void FUN_00423c10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447828;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  uVar3 = 0;
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    local_8 = 1;
    (**(code **)(*(int *)*piVar2 + 0x10))(param_2,param_3,uVar1,uVar3);
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

