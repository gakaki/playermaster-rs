
bool __thiscall FUN_0042a900(CGridCellBase *param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((((*puVar1 < 0x78) || ((code *)puVar1[0x1d] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1d])(puVar1,iVar2,param_3,uVar3);
  return iVar2 != 0;
}

