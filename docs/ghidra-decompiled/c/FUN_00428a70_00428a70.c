
undefined1 __thiscall
FUN_00428a70(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  undefined1 uVar1;
  int *piVar2;
  undefined **local_38;
  int local_34;
  undefined1 local_30;
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
  puStack_c = &LAB_00447f40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_34 = param_6;
  local_28 = param_3;
  if (param_1 != 0) {
    if (param_3 != 0) {
      if ((param_6 != 0) && (local_8 = 0xffffffff, param_7 != 0)) {
        piVar2 = FUN_0043c590(&param_3,param_1);
        piVar2 = (int *)*piVar2;
        local_8 = 4;
        FUN_00428970((int *)((int)register0x00000010 + -0x48),param_7);
        local_38 = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_30 = 0;
        local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_1c = 0;
        if (param_5 != 0) {
          local_1c = param_5;
        }
        local_18 = 0;
        local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_24 = 0;
        local_8 = CONCAT31(local_8._1_3_,7);
        uVar1 = (**(code **)(*piVar2 + 0x10))(param_2 != 0,&local_2c,param_4,&local_20,&local_38);
        FUN_0040b8c0(&local_2c);
        FUN_0040b8c0(&local_20);
        FUN_0040b8c0(&local_38);
        local_8 = 0xffffffff;
        if (param_3 != 0) {
          (**(code **)(*(int *)(param_3 + 4 + *(int *)(*(int *)(param_3 + 4) + 4)) + 4))();
        }
        ExceptionList = local_10;
        return uVar1;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

