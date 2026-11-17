
bool __thiscall
FUN_0043f1f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x3c) || ((code *)puVar1[0xe] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0xe])(puVar1,param_1,param_2,param_3,param_4);
  return iVar2 != 0;
}

