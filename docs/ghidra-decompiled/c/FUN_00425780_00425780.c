
undefined1 __thiscall FUN_00425780(void *this,int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004491c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_3 != (undefined1 *)0x0) {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_1e + -6;
      local_8 = 3;
      FUN_004250c0((int *)(auStack_1e + -6),(int)puVar1);
      local_8._0_1_ = 4;
      FUN_0041f760((int *)(auStack_1e + -10),param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar2 = (**(code **)(*piVar3 + 4))();
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

