
undefined4 * __thiscall FUN_004405e0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0044c274;
  if (*(int *)((int)this + 0xa0) == 0) {
    cef_string_utf16_clear((int)this + 4);
    cef_string_utf16_clear((int)this + 0x10);
    cef_string_utf16_clear((int)this + 0x1c);
    cef_string_utf16_clear((int)this + 0x28);
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

