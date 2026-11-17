
undefined4 * __thiscall FUN_00409330(void *this,byte param_1)

{
  *(undefined ***)this = Gdiplus::Image::vftable;
  GdipDisposeImage(*(undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    GdipFree(this);
  }
  return this;
}

