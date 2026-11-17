
bool __thiscall FUN_00435bb0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x4c) || (puVar1[0x12] == 0)) {
    return false;
  }
  iVar2 = cef_string_list_alloc();
  if (iVar2 != 0) {
    FUN_004231d0(param_1,iVar2);
  }
  iVar3 = (*(code *)puVar1[0x12])(puVar1,iVar2);
  if (iVar2 != 0) {
    FUN_0041eac0(param_1);
    FUN_00423210(iVar2,param_1);
    cef_string_list_free(iVar2);
  }
  return iVar3 != 0;
}

