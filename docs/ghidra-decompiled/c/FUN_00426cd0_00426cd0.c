
void __thiscall FUN_00426cd0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x43 < *puVar1) && (puVar1[0x10] != 0)) {
    iVar2 = cef_string_multimap_alloc();
    if (iVar2 != 0) {
      FUN_00423560(param_1,iVar2);
    }
    (*(code *)puVar1[0x10])(puVar1,iVar2);
    if (iVar2 != 0) {
      cef_string_multimap_free(iVar2);
    }
  }
  return;
}

