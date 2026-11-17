
bool __thiscall FUN_00441ea0(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xf4) || ((code *)puVar1[0x3c] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x3c])(puVar1,param_1,*(undefined4 *)(param_2 + 4));
  return iVar2 != 0;
}

