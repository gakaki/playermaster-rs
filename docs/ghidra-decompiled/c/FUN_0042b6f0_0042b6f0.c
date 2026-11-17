
bool __thiscall FUN_0042b6f0(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x78) || ((code *)puVar1[0x1d] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1d])(puVar1,param_1,*(undefined4 *)(param_2 + 4));
  return iVar2 != 0;
}

