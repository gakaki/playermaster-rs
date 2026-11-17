
void __thiscall FUN_0042f330(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x77 < *puVar1) && ((code *)puVar1[0x1d] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0x1d])(puVar1,iVar2,uVar3);
  }
  return;
}

