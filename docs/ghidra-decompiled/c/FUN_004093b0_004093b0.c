
undefined4 * __thiscall FUN_004093b0(void *this,byte param_1)

{
  *(undefined ***)this = CMainTitileDraw::vftable;
  if (*(int *)((int)this + 8) != 0) {
    Ordinal_3821();
    if (*(int **)((int)this + 8) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 8) + 4))(1);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

