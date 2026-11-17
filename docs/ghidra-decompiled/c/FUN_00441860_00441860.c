
bool __thiscall
FUN_00441860(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_3 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x10])(puVar1,param_1,param_2,iVar2,param_4,uVar3);
  return iVar2 != 0;
}

