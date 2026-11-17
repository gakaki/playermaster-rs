
undefined4 __thiscall FUN_0042a3b0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return 0;
  }
  uVar3 = (*(code *)puVar1[0x10])(puVar1,iVar2,uVar3);
  return uVar3;
}

