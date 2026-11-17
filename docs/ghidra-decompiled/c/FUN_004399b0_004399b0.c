
void __thiscall FUN_004399b0(void *this,int param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int aiStackY_23c [128];
  undefined1 auStack_26 [2];
  undefined **local_20;
  undefined1 *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448bf8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (local_8 = 0xffffffff, param_4 != (undefined1 *)0x0)) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
    local_1c = param_4;
    local_18 = 0;
    local_8 = 5;
    param_4 = auStack_26 + -10;
    FUN_0041f660((int *)(auStack_26 + -10),param_3);
    local_8._0_1_ = 6;
    FUN_0041f560(aiStackY_23c + 0x82,param_2);
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)*puVar1)();
    FUN_0040b8c0(&local_20);
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

