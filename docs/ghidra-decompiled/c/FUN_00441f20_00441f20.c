
bool __thiscall FUN_00441f20(void *this,undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x84) || ((code *)puVar1[0x20] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x20])(puVar1,param_1,param_2);
  return iVar2 != 0;
}

