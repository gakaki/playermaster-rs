
void __thiscall FUN_0042c9c0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x6f < *puVar1) && (puVar1[0x1b] != 0)) {
    iVar2 = cef_string_map_alloc();
    if (iVar2 != 0) {
      FUN_004232e0(param_1,iVar2);
    }
    (*(code *)puVar1[0x1b])(puVar1,iVar2);
    if (iVar2 != 0) {
      FUN_004209d0(*(int **)(*param_1 + 4));
      *(int *)(*param_1 + 4) = *param_1;
      *(int *)*param_1 = *param_1;
      *(int *)(*param_1 + 8) = *param_1;
      param_1[1] = 0;
      FUN_00423350(iVar2,param_1);
      cef_string_map_free(iVar2);
    }
  }
  return;
}

