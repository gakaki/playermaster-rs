
undefined4 * __thiscall FUN_00422800(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004479e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = CefStringBase<CefStringTraitsUTF16>::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = piVar1[1];
    iVar2 = *piVar1;
  }
  FUN_0041e530(this,iVar2,iVar3,1);
  *(undefined ***)((int)this + 0xc) = CefStringBase<CefStringTraitsUTF16>::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  piVar1 = *(int **)(param_1 + 0x10);
  local_8 = 0;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
    iVar2 = 0;
  }
  else {
    iVar3 = piVar1[1];
    iVar2 = *piVar1;
  }
  FUN_0041e530((void *)((int)this + 0xc),iVar2,iVar3,1);
  ExceptionList = local_10;
  return this;
}

