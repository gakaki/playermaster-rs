
undefined4 * __thiscall FUN_0041eb00(void *this,int param_1)

{
  *(undefined ***)this = CefStringBase<CefStringTraitsUTF16>::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    *(int *)((int)this + 4) = param_1;
    *(undefined1 *)((int)this + 8) = 0;
  }
  return this;
}

