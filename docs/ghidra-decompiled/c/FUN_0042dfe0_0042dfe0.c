
undefined4 * __thiscall FUN_0042dfe0(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined ***)((int)this + -0x10) = &PTR_LAB_0044b7a8;
  puVar1 = (undefined4 *)((int)this + -0x10);
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044b7e8;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *puVar1 = &PTR_purecall_0044b754;
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044b794;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *(undefined ***)this = CefBaseRefCounted::vftable;
  if ((param_1 & 1) != 0) {
    Ordinal_1508(puVar1);
  }
  return puVar1;
}

