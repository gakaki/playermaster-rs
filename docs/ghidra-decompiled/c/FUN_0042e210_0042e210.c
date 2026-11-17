
void __thiscall FUN_0042e210(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x47 < *puVar1) && (puVar1[0x11] != 0)) {
    iVar2 = cef_string_multimap_alloc();
    if (iVar2 != 0) {
      FUN_00423560(param_1,iVar2);
    }
    (*(code *)puVar1[0x11])(puVar1,iVar2);
    if (iVar2 != 0) {
      FUN_004209d0(*(int **)(*param_1 + 4));
      *(int *)(*param_1 + 4) = *param_1;
      *(int *)*param_1 = *param_1;
      *(int *)(*param_1 + 8) = *param_1;
      param_1[1] = 0;
      FUN_004235d0(iVar2,param_1);
      cef_string_multimap_free(iVar2);
    }
  }
  return;
}

