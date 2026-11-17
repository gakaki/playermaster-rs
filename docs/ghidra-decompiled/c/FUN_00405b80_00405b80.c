
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00405b80(void *this,undefined4 param_1)

{
  if (_DAT_0044feb4 < *(float *)((int)this + 8)) {
    Ordinal_286(L"DPI250\\");
    return param_1;
  }
  if (_DAT_0044feb0 < *(float *)((int)this + 8)) {
    Ordinal_286(L"DPI150\\");
    return param_1;
  }
  Ordinal_286(0);
  return param_1;
}

