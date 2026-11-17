
void __thiscall FUN_00420480(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x2f < *puVar1) && (puVar1[0xb] != 0)) {
    iVar2 = cef_string_list_alloc();
    if (iVar2 != 0) {
      FUN_004231d0(param_1,iVar2);
    }
    (*(code *)puVar1[0xb])(puVar1,iVar2);
    if (iVar2 != 0) {
      FUN_0041eac0(param_1);
      FUN_00423210(iVar2,param_1);
      cef_string_list_free(iVar2);
    }
  }
  return;
}

