
bool __thiscall FUN_00441ce0(void *this,undefined4 param_1,undefined1 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xbc) || ((code *)puVar1[0x2e] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x2e])(puVar1,param_1,param_2);
  return iVar2 != 0;
}

