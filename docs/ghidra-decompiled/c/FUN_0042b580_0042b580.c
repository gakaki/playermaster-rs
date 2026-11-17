
bool __thiscall FUN_0042b580(void *this,undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1b])(puVar1,param_1,param_2);
  return iVar2 != 0;
}

