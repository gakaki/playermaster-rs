
bool __thiscall FUN_00422160(void *this,undefined1 param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x54) || ((code *)puVar1[0x14] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x14])(puVar1,param_1);
  return iVar2 != 0;
}

