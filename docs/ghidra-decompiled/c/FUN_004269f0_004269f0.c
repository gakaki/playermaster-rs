
undefined4 * __thiscall FUN_004269f0(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
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
  puVar1 = *(uint **)((int)this + -4);
  local_14 = 0;
  if ((*puVar1 < 0x1c) || ((code *)puVar1[6] == (code *)0x0)) {
    *param_1 = CefStringBase<CefStringTraitsUTF16>::vftable;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return param_1;
  }
  ExceptionList = &local_10;
  puVar3 = (undefined8 *)(*(code *)puVar1[6])(puVar1,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_1c = 0;
  local_18 = '\0';
  local_8 = 0;
  FUN_0041e2a0(&local_20,puVar3);
  FUN_0041e200(param_1,(int)&local_20);
  iVar2 = local_1c;
  if ((local_1c != 0) && (local_18 != '\0')) {
    cef_string_utf16_clear(local_1c);
    Ordinal_1508(iVar2);
  }
  ExceptionList = local_10;
  return param_1;
}

