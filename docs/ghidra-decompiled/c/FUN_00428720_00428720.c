
void __thiscall FUN_00428720(void *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447f00;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
    local_1c = 0;
    if (param_2 != 0) {
      local_1c = param_2;
    }
    local_18 = '\0';
    local_8 = 2;
    (*(code *)**(undefined4 **)*piVar2)(&local_20,uVar1);
    local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
    if (local_1c != 0) {
      if (local_18 != '\0') {
        cef_string_utf16_clear(local_1c);
        Ordinal_1508(local_1c);
      }
      local_1c = 0;
      local_18 = '\0';
    }
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

