
void __thiscall
FUN_0042c3d0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            int param_6)

{
  int *piVar1;
  int iStack_44;
  int iStack_40;
  undefined **local_2c;
  int local_28;
  undefined1 local_24;
  undefined **local_20;
  int local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004481d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_28 = param_6;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    local_8 = 0xffffffff;
    if (param_6 != 0) {
      iStack_40 = 0x42c452;
      piVar1 = FUN_0043c590(&param_6,param_1);
      piVar1 = (int *)*piVar1;
      local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_24 = 0;
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = 0;
      if (param_5 != 0) {
        local_1c = param_5;
      }
      local_18 = 0;
      local_8 = 6;
      iStack_40 = param_4;
      FUN_0041f660(&iStack_44,param_3);
      local_8._0_1_ = 7;
      FUN_0041f560((int *)((int)register0x00000010 + -0x48),param_2);
      local_8 = CONCAT31(local_8._1_3_,6);
      (**(code **)(*piVar1 + 0xc))();
      FUN_0040b8c0(&local_20);
      FUN_0040b8c0(&local_2c);
      local_8 = 0xffffffff;
      if (param_6 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_6 + 4) + 4) + param_6 + 4) + 4))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

