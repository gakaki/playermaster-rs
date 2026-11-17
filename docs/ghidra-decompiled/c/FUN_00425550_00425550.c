
void __thiscall FUN_00425550(void *this,int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iStack_3c;
  undefined **local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447cb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      if (param_4 != 0) {
        local_18 = *param_3;
        local_14 = param_3[1];
        local_24 = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_20 = param_4;
        local_1c = 0;
        local_8 = 4;
        iStack_3c = 0x4255f0;
        piVar2 = FUN_0043c590(&param_1,param_1);
        piVar2 = (int *)*piVar2;
        local_8._0_1_ = 5;
        FUN_004253c0(&iStack_3c,param_2);
        (**(code **)(*piVar2 + 8))();
        local_8 = CONCAT31(local_8._1_3_,4);
        if (param_1 != 0) {
          (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
        }
        *puVar1 = local_18;
        puVar1[1] = local_14;
        FUN_0040b8c0(&local_24);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

