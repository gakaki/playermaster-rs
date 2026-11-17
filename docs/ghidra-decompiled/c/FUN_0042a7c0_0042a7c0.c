
bool __thiscall FUN_0042a7c0(void *this,int param_1,undefined1 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1b])(puVar1,iVar2,param_2);
  return iVar2 != 0;
}

