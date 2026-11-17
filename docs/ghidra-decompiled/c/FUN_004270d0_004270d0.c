
undefined4 * __thiscall FUN_004270d0(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined ***)((int)this + -0x10) = &PTR_LAB_0044b0e0;
  puVar1 = (undefined4 *)((int)this + -0x10);
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044b19c;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *puVar1 = &PTR_purecall_0044b010;
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044b0cc;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *(undefined ***)this = CefBaseRefCounted::vftable;
  if ((param_1 & 1) != 0) {
    Ordinal_1508(puVar1);
  }
  return puVar1;
}

