
bool __thiscall FUN_0042a960(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x74) || ((code *)puVar1[0x1c] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1c])(puVar1,iVar2,param_2,uVar3);
  return iVar2 != 0;
}

