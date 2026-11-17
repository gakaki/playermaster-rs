
void __thiscall FUN_00421370(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x4b < *puVar1) && ((code *)puVar1[0x12] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) &&
     (((*(int *)(iVar2 + 4) != 0 && (iVar3 = *(int *)(param_2 + 4), iVar3 != 0)) &&
      (*(int *)(iVar3 + 4) != 0)))) {
    (*(code *)puVar1[0x12])(puVar1,iVar2,iVar3);
  }
  return;
}

