
bool __thiscall FUN_0042d060(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x74) || ((code *)puVar1[0x1c] == (code *)0x0)) ||
      (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)) ||
     (((*(int *)(iVar3 + 4) == 0 || (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) ||
      (*(int *)(iVar2 + 4) == 0)))) {
    return false;
  }
  iVar3 = (*(code *)puVar1[0x1c])(puVar1,iVar3,iVar2);
  return iVar3 != 0;
}

