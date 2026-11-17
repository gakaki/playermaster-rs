
void __thiscall FUN_00442480(void *this,int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((0x17 < *puVar1) && (puVar1[5] != 0)) && (-1 < param_1)) {
    iVar2 = cef_string_list_alloc();
    if (iVar2 != 0) {
      FUN_004231d0(param_2,iVar2);
    }
    (*(code *)puVar1[5])(puVar1,param_1,iVar2);
    if (iVar2 != 0) {
      cef_string_list_free(iVar2);
    }
  }
  return;
}

