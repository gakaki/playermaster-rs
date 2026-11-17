
bool __thiscall FUN_0043eff0(void *this,undefined4 param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x28) || ((code *)puVar1[9] == (code *)0x0)) || (param_2 == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[9])(puVar1,param_1,param_2,param_3,uVar3);
  return iVar2 != 0;
}

