
void __fastcall FUN_0042fa70(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x83 < *puVar1) && ((code *)puVar1[0x20] != (code *)0x0)) {
    (*(code *)puVar1[0x20])(puVar1);
  }
  return;
}

