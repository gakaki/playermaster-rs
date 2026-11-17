
undefined4 * __thiscall FUN_0043f470(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)((int)this + 4) = &DAT_0044c23c;
    *(undefined ***)((int)this + 0x10) = CefBaseRefCounted::vftable;
  }
  *(undefined ***)this = &PTR_purecall_0044bc5c;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_purecall_0044b804;
  *(undefined ***)this = &PTR_purecall_0044bc5c;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044c200;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_0044c214;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044c228;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  return this;
}

