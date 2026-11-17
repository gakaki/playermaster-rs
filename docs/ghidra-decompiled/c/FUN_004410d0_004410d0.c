
bool __thiscall FUN_004410d0(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x2c) || ((code *)puVar1[10] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[10])(puVar1,param_1,iVar2,uVar3);
  return iVar2 != 0;
}

