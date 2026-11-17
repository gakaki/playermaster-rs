
undefined1 __thiscall
FUN_0043b5d0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,uint *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 uVar4;
  int *piVar5;
  int iStack_64;
  undefined ***pppuStack_60;
  undefined4 uStack_5c;
  undefined **local_3c;
  int local_38;
  undefined1 local_34;
  undefined **local_30;
  int local_2c;
  undefined1 local_28;
  undefined **local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448de8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  CGridCellBase::EndEdit(this);
  puVar3 = param_8;
  iVar2 = param_2;
  if (param_1 != 0) {
    if ((param_2 != 0) && (param_7 != 0)) {
      local_8 = 0xffffffff;
      if (param_8 != (uint *)0x0) {
        local_11 = *param_8 != 0;
        piVar5 = FUN_0043c590(&param_2,param_1);
        puVar1 = (undefined4 *)*piVar5;
        param_8 = (uint *)((int)register0x00000010 + -0x50);
        local_8 = 4;
        uStack_5c = 0x43b682;
        FUN_0043b3b0((int *)((int)register0x00000010 + -0x50),param_7);
        local_3c = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_38 = 0;
        if (param_6 != 0) {
          local_38 = param_6;
        }
        local_34 = 0;
        local_30 = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_2c = 0;
        if (param_5 != 0) {
          local_2c = param_5;
        }
        local_28 = 0;
        local_24 = CefStringBase<CefStringTraitsUTF16>::vftable;
        local_20 = 0;
        uStack_5c = param_4;
        if (param_3 != 0) {
          local_20 = param_3;
        }
        local_1c = 0;
        pppuStack_60 = &local_24;
        local_8._0_1_ = 8;
        FUN_0041f560(&iStack_64,iVar2);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        uVar4 = (**(code **)*puVar1)();
        FUN_0040b8c0(&local_24);
        FUN_0040b8c0(&local_30);
        FUN_0040b8c0(&local_3c);
        local_8 = 0xffffffff;
        if (param_2 != 0) {
          (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 4))();
        }
        *puVar3 = (uint)(local_11 != '\0');
        ExceptionList = local_10;
        return uVar4;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

