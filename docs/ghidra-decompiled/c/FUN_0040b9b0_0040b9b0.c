
undefined4 * __thiscall FUN_0040b9b0(void *this,byte param_1)

{
  *(undefined ***)this = CefStructBase<CefSettingsTraits>::vftable;
  if (*(int *)((int)this + 0xe8) == 0) {
    FUN_0040a9e0((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

