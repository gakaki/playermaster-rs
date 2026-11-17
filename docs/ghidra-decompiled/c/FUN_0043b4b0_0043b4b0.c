
undefined1 __thiscall
FUN_0043b4b0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iStack_38;
  undefined1 auStack_26 [2];
  undefined **local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448d98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined1 *)0x0;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == 0)) || (local_8 = 0xffffffff, param_5 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  piVar2 = FUN_0043c590(&param_1,param_1);
  piVar2 = (int *)*piVar2;
  local_14 = auStack_26 + -6;
  local_8 = 3;
  iStack_38 = 0x43b542;
  FUN_0043b3b0((int *)(auStack_26 + -6),param_5);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_1c = 0;
  if (param_3 != 0) {
    local_1c = param_3;
  }
  local_18 = 0;
  local_8._0_1_ = 5;
  FUN_0041f560(&iStack_38,param_2);
  local_8 = CONCAT31(local_8._1_3_,6);
  uVar1 = (**(code **)(*piVar2 + 4))();
  FUN_0040b8c0(&local_20);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar1;
}

