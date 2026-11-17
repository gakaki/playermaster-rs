
undefined1 __thiscall
FUN_0043ab80(void *this,int param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  int aiStackY_234 [128];
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004491c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar2 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_3 != (undefined1 *)0x0) {
      piVar4 = FUN_0043c590(&param_1,param_1);
      puVar1 = (undefined4 *)*piVar4;
      param_3 = auStack_1e + -10;
      local_8 = 3;
      FUN_004363b0((int *)(auStack_1e + -10),(int)puVar2);
      local_8._0_1_ = 4;
      FUN_0041f560(aiStackY_234 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar3 = (**(code **)*puVar1)();
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar3;
    }
  }
  ExceptionList = local_10;
  return 0;
}

