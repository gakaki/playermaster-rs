
float10 __fastcall FUN_0042ee60(CGridCellBase *param_1)

{
  uint *puVar1;
  float10 fVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x3c) || ((code *)puVar1[0xe] == (code *)0x0)) {
    return (float10)0;
  }
  fVar2 = (float10)(*(code *)puVar1[0xe])(puVar1);
  return fVar2;
}

