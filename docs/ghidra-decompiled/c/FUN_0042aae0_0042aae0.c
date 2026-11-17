
bool __thiscall FUN_0042aae0(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x7c) || ((code *)puVar1[0x1e] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1e])(puVar1,iVar2,*(undefined4 *)(param_2 + 4));
  return iVar2 != 0;
}

