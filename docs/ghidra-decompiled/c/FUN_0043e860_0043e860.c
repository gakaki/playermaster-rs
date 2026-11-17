
void __thiscall FUN_0043e860(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined **local_20;
  int local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449340;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_1c = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 0xffffffff;
    if (param_3 != 0) {
      piVar1 = FUN_0043c590(&param_1,param_1);
      piVar1 = (int *)*piVar1;
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_18 = 0;
      local_8 = 4;
      FUN_0041f560((int *)((int)register0x00000010 + -0x34),param_2);
      (**(code **)(*piVar1 + 0x1c))();
      FUN_0040b8c0(&local_20);
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

