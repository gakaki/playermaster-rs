
bool __thiscall FUN_00422ee0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) &&
     ((*(int *)(param_1 + 4) == 0 || (*(int *)(*(int *)(param_1 + 4) + 4) == 0)))) {
    return false;
  }
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
    return true;
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
    return false;
  }
  iVar2 = cef_string_utf16_cmp(iVar2,iVar1);
  return iVar2 < 0;
}

