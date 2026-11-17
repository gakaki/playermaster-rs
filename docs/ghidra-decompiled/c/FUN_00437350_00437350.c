
undefined4 * __thiscall FUN_00437350(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0044c038;
  if (*(int *)((int)this + 0x40) == 0) {
    cef_string_utf16_clear((int)this + 8);
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

