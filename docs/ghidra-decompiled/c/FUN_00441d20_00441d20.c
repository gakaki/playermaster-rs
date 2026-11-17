
bool __thiscall FUN_00441d20(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xe0) || ((code *)puVar1[0x37] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x37])(puVar1,param_1,param_2,param_3);
  return iVar2 != 0;
}

