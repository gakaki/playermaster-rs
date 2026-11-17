
void FUN_00424320(int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_1 != 0) && (param_2 != 0)) && (local_8 = 0xffffffff, param_3 != 0)) {
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 3;
    FUN_00422540((int *)((int)register0x00000010 + -0x20),param_3);
    local_8._0_1_ = 4;
    FUN_0041f560((int *)((int)register0x00000010 + -0x24),param_2);
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)(*piVar1 + 8))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

