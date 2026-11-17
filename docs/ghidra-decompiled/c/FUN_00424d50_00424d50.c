
undefined1 __thiscall FUN_00424d50(void *this,int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447c80;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  if (param_1 != 0) {
    if (param_3 != 0) {
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = param_3;
      local_18 = '\0';
      local_8 = 2;
      piVar3 = FUN_0043c590(&param_1,param_1);
      local_8._0_1_ = 3;
      uVar1 = (*(code *)**(undefined4 **)*piVar3)(param_2,&local_20,uVar2);
      local_8 = CONCAT31(local_8._1_3_,2);
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      if ((local_1c != 0) && (local_18 != '\0')) {
        cef_string_utf16_clear(local_1c);
        Ordinal_1508(local_1c);
      }
      ExceptionList = local_10;
      return uVar1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

