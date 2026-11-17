
undefined4 * __thiscall FUN_004372a0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0044c050;
  if (*(int *)((int)this + 0xc4) == 0) {
    FUN_004375d0((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

