
undefined4 * __thiscall FUN_00430d90(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448678;
  local_10 = ExceptionList;
  uVar3 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) {
    *param_1 = CefStringBase<CefStringTraitsUTF16>::vftable;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = (undefined8 *)(*(code *)puVar1[0x10])(puVar1,uVar3);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_1c = 0;
  local_18 = '\0';
  local_8 = 0;
  FUN_0041e2a0(&local_20,puVar4);
  FUN_0041e200(param_1,(int)&local_20);
  iVar2 = local_1c;
  if ((local_1c != 0) && (local_18 != '\0')) {
    cef_string_utf16_clear(local_1c);
    Ordinal_1508(iVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

