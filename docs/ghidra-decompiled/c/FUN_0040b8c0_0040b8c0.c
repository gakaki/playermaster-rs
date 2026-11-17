
void __fastcall FUN_0040b8c0(undefined4 *param_1)

{
  *param_1 = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (param_1[1] != 0) {
    if (*(char *)(param_1 + 2) != '\0') {
      cef_string_utf16_clear(param_1[1]);
      Ordinal_1508(param_1[1]);
    }
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

