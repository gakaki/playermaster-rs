
bool __thiscall FUN_00422260(void *this,undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x5c) || ((code *)puVar1[0x16] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x16])(puVar1,param_1);
  return iVar2 != 0;
}

