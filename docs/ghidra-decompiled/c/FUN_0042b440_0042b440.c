
bool __thiscall FUN_0042b440(void *this,undefined4 param_1,undefined1 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x6c) || ((code *)puVar1[0x1a] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1a])(puVar1,param_1,param_2);
  return iVar2 != 0;
}

