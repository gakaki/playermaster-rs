
undefined4 * __thiscall FUN_0041e200(void *this,int param_1)

{
  int *piVar1;
  
  *(undefined ***)this = CefStringBase<CefStringTraitsUTF16>::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    FUN_0041e530(this,0,0,1);
    return this;
  }
  FUN_0041e530(this,*piVar1,piVar1[1],1);
  return this;
}

