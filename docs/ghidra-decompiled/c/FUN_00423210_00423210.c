
void __cdecl FUN_00423210(undefined4 param_1,void *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined **local_1c;
  undefined8 *local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = cef_string_list_size(param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_1c = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_18 = (undefined8 *)0x0;
  local_14 = '\0';
  uVar3 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      if (local_18 == (undefined8 *)0x0) {
        local_18 = (undefined8 *)Ordinal_1506(0xc);
        local_14 = '\x01';
        *local_18 = 0;
        *(undefined4 *)(local_18 + 1) = 0;
      }
      cef_string_list_value(param_1,uVar3,local_18);
      FUN_004230d0(param_2,(uint)&local_1c);
      puVar1 = local_18;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
    if ((local_18 != (undefined8 *)0x0) && (local_14 != '\0')) {
      cef_string_utf16_clear(local_18);
      Ordinal_1508(puVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

