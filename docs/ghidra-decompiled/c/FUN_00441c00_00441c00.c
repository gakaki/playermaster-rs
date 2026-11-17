
bool __thiscall
FUN_00441c00(void *this,undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 200) || ((code *)puVar1[0x31] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x31])(puVar1,param_1,param_2,param_3,param_4,param_5);
  return iVar2 != 0;
}

