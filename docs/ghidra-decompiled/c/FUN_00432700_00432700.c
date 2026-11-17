
undefined4 * __thiscall FUN_00432700(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)((int)this + 4) = &DAT_0044bcec;
    *(undefined ***)((int)this + 0x10) = CefBaseRefCounted::vftable;
  }
  *(undefined ***)this = &PTR_purecall_0044bcb4;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_purecall_0044b804;
  *(undefined ***)this = &PTR_purecall_0044bcb4;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044bcbc;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_0044bcd0;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044bcd8;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  return this;
}

