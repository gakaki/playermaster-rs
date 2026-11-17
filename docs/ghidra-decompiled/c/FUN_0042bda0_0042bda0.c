
undefined1 __thiscall
FUN_0042bda0(void *this,int param_1,int param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int aiStackY_234 [128];
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar1 = param_4;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_4 != (undefined1 *)0x0) {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_4 = auStack_1e + -6;
      local_8 = 3;
      FUN_0042b9c0((int *)(auStack_1e + -6),(int)puVar1);
      local_8._0_1_ = 4;
      FUN_0041f560(aiStackY_234 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,3);
      uVar2 = (**(code **)(*piVar3 + 8))();
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

