
void __thiscall
FUN_0042eb50(void *this,undefined4 param_1,int param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x57 < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_2 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0x15])(puVar1,param_1,iVar2,param_3,param_4,param_5);
  }
  return;
}

