
bool __thiscall FUN_00441da0(void *this,undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x5c) || ((code *)puVar1[0x16] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x16])(puVar1,param_1,param_2);
  return iVar2 != 0;
}

