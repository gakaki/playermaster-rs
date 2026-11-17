
void __thiscall FUN_0042c2f0(void *this,int param_1,int param_2,int param_3,undefined1 *param_4)

{
  int *piVar1;
  int aiStackY_230 [128];
  undefined1 auStack_1a [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448190;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if (((param_1 != 0) && (param_2 != 0)) && (local_8 = 0xffffffff, param_3 != 0)) {
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    param_4 = auStack_1a + -10;
    local_8 = 3;
    FUN_0041f660((int *)(auStack_1a + -10),param_3);
    local_8._0_1_ = 4;
    FUN_0041f560(aiStackY_230 + 0x82,param_2);
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

