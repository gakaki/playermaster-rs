
bool __thiscall FUN_00441b90(void *this,undefined4 param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xd4) || ((code *)puVar1[0x34] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x34])(puVar1,param_1);
  return iVar2 != 0;
}

