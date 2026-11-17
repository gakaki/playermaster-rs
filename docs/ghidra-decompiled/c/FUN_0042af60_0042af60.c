
float10 __thiscall FUN_0042af60(CGridCellBase *param_1,undefined4 param_2)

{
  uint *puVar1;
  float10 fVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x50) || ((code *)puVar1[0x13] == (code *)0x0)) {
    return (float10)0;
  }
  fVar2 = (float10)(*(code *)puVar1[0x13])(puVar1,param_2);
  return fVar2;
}

