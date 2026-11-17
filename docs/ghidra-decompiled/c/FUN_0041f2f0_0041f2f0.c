
void FUN_0041f2f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447800;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    local_8 = 0xffffffff;
    if (param_2 != (undefined4 *)0x0) {
      piVar3 = (int *)FUN_0041ecc0((int *)&param_2,(int)param_2);
      puVar1 = (undefined4 *)*piVar3;
      *piVar3 = 0;
      local_8 = 2;
      if (param_2 != (undefined4 *)0x0) {
        (**(code **)*param_2)(1,uVar2);
      }
      piVar3 = FUN_0043c590(&param_1,param_1);
      local_8._0_1_ = 3;
      (**(code **)(*(int *)*piVar3 + 4))(puVar1);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (param_1 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
      }
      local_8 = 0xffffffff;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

