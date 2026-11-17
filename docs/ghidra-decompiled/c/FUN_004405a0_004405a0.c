
void __fastcall FUN_004405a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0044c274;
  if (param_1[0x28] == 0) {
    cef_string_utf16_clear(param_1 + 1);
    cef_string_utf16_clear(param_1 + 4);
    cef_string_utf16_clear(param_1 + 7);
    cef_string_utf16_clear(param_1 + 10);
  }
  return;
}

