
undefined1 __thiscall
FUN_0043e940(void *this,int param_1,int param_2,undefined1 *param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined1 uVar1;
  int *piVar2;
  int iStack_40;
  undefined ***pppuStack_3c;
  undefined1 auStack_2a [2];
  undefined **local_20;
  undefined1 *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449378;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_1c = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) && (local_8 = 0xffffffff, param_6 != 0)) {
      piVar2 = FUN_0043c590(&param_1,param_1);
      piVar2 = (int *)*piVar2;
      param_3 = auStack_2a + -6;
      local_8 = 4;
      pppuStack_3c = (undefined ***)0x43e9e2;
      FUN_0043dcd0((int *)(auStack_2a + -6),param_6);
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_18 = 0;
      pppuStack_3c = &local_20;
      local_8._0_1_ = 6;
      FUN_0041f560(&iStack_40,param_2);
      local_8 = CONCAT31(local_8._1_3_,7);
      uVar1 = (**(code **)(*piVar2 + 0x10))();
      FUN_0040b8c0(&local_20);
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

