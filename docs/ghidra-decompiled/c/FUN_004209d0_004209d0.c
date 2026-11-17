
void FUN_004209d0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xd);
  while (cVar1 == '\0') {
    FUN_004209d0((int *)param_1[2]);
    piVar2 = (int *)*param_1;
    param_1[7] = (int)CefStringBase<CefStringTraitsUTF16>::vftable;
    if (param_1[8] != 0) {
      if ((char)param_1[9] != '\0') {
        cef_string_utf16_clear(param_1[8]);
        Ordinal_1508(param_1[8]);
      }
      param_1[8] = 0;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    param_1[4] = (int)CefStringBase<CefStringTraitsUTF16>::vftable;
    if (param_1[5] != 0) {
      if ((char)param_1[6] != '\0') {
        cef_string_utf16_clear(param_1[5]);
        Ordinal_1508(param_1[5]);
      }
      param_1[5] = 0;
      *(undefined1 *)(param_1 + 6) = 0;
    }
    Ordinal_1508(param_1);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0xd);
  }
  return;
}

