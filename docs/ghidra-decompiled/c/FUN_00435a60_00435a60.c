
void __thiscall FUN_00435a60(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x6b < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0x1a])(puVar1,iVar2,*(undefined4 *)(param_2 + 4));
  }
  return;
}

