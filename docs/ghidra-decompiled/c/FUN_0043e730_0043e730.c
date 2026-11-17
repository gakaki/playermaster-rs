
undefined1 __thiscall
FUN_0043e730(void *this,int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_3c;
  undefined ***pppuStack_38;
  undefined **local_20;
  int *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449308;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  iVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != 0) && (local_8 = 0xffffffff, param_4 != (int *)0x0)) {
      pppuStack_38 = (undefined ***)0x43e7b8;
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = param_4;
      local_18 = 0;
      pppuStack_38 = &local_20;
      local_8 = 5;
      param_4 = &iStack_3c;
      FUN_0041f660(&iStack_3c,iVar1);
      local_8._0_1_ = 6;
      FUN_0041f560((int *)((int)register0x00000010 + -0x40),param_2);
      local_8 = CONCAT31(local_8._1_3_,5);
      uVar2 = (**(code **)(*piVar3 + 4))();
      FUN_0040b8c0(&local_20);
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

