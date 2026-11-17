
undefined4 * __thiscall FUN_0040b960(void *this,byte param_1)

{
  *(undefined ***)this = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (*(int *)((int)this + 4) != 0) {
    if (*(char *)((int)this + 8) != '\0') {
      cef_string_utf16_clear(*(int *)((int)this + 4));
      Ordinal_1508(*(undefined4 *)((int)this + 4));
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0;
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

