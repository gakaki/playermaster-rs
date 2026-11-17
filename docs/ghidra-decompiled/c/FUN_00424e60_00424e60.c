
undefined4 * __thiscall FUN_00424e60(void *this,byte param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR_FUN_0044bd28;
  if ((param_1 & 1) != 0) {
    iVar1 = *(int *)((int)this + -4);
    if ((iVar1 != 0) && (*(code **)(iVar1 + 4) != (code *)0x0)) {
      (**(code **)(iVar1 + 4))(iVar1);
    }
    Ordinal_1508((int)this + -8);
  }
  return this;
}

