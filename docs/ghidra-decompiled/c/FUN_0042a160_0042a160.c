
float10 __thiscall FUN_0042a160(CGridCellBase *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  float10 fVar3;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((((*puVar1 < 0x54) || ((code *)puVar1[0x14] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return (float10)0;
  }
  fVar3 = (float10)(*(code *)puVar1[0x14])(puVar1,iVar2);
  return fVar3;
}

