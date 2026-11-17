
undefined1 __thiscall
FUN_004396b0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,undefined1 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iStack_60;
  undefined4 uStack_5c;
  undefined ***pppuStack_58;
  undefined1 auStack_42 [2];
  int local_38 [3];
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
  puStack_c = &LAB_00448bb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar3 = param_8;
  iVar2 = param_1;
  if (((param_1 != 0) && (param_2 != 0)) && (-1 < param_7)) {
    if (param_8 != (undefined1 *)0x0) {
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_8 = 3;
      FUN_00423210(param_6,local_38);
      pppuStack_58 = (undefined ***)0x439759;
      piVar5 = FUN_0043c590(&param_1,iVar2);
      puVar1 = (undefined4 *)*piVar5;
      param_8 = auStack_42 + -6;
      local_8._0_1_ = 4;
      FUN_004395b0((int *)(auStack_42 + -6),(int)puVar3);
      local_2c = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_28 = 0;
      if (param_5 != 0) {
        local_28 = param_5;
      }
      local_24 = 0;
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = 0;
      if (param_4 != 0) {
        local_1c = param_4;
      }
      local_18 = 0;
      pppuStack_58 = &local_20;
      local_8._0_1_ = 7;
      uStack_5c = param_3;
      FUN_0041f560(&iStack_60,param_2);
      local_8._0_1_ = 9;
      uVar4 = (**(code **)*puVar1)();
      FUN_0040b8c0(&local_20);
      FUN_0040b8c0(local_38 + 3);
      local_8 = CONCAT31(local_8._1_3_,3);
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      FUN_00435740(local_38);
      ExceptionList = local_10;
      return uVar4;
    }
  }
  ExceptionList = local_10;
  return 0;
}

