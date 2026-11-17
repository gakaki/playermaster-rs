
undefined4 * __thiscall FUN_00420130(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)((int)this + 4) = &DAT_0044accc;
    *(undefined ***)((int)this + 0x10) = CefBaseRefCounted::vftable;
  }
  *(undefined ***)this = &PTR_purecall_0044aeb8;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_purecall_0044b804;
  *(undefined ***)this = &PTR_purecall_0044aeb8;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044ac54;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_0044ac68;
  *(undefined ***)(*(int *)(*(int *)((int)this + 4) + 4) + 4 + (int)this) = &PTR_LAB_0044acb8;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 4);
  *(int *)(iVar1 + (int)this) = iVar1 + -0xc;
  return this;
}

