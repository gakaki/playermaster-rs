
undefined4 * __thiscall FUN_00433790(void *this,byte param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined ***)((int)this + -0x10) = &PTR_LAB_0044bdec;
  puVar1 = (undefined4 *)((int)this + -0x10);
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044be0c;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *puVar1 = &PTR_purecall_0044bdb8;
  *(undefined ***)(*(int *)(*(int *)((int)this + -0xc) + 4) + 4 + (int)puVar1) = &PTR_LAB_0044bdd8;
  iVar2 = *(int *)(*(int *)((int)this + -0xc) + 4);
  *(int *)(iVar2 + (int)puVar1) = iVar2 + -0xc;
  *(undefined ***)this = CefBaseRefCounted::vftable;
  if ((param_1 & 1) != 0) {
    Ordinal_1508(puVar1);
  }
  return puVar1;
}

