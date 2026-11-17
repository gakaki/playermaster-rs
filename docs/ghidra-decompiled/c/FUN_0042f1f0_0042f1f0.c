
void __fastcall FUN_0042f1f0(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x4f < *puVar1) && ((code *)puVar1[0x13] != (code *)0x0)) {
    (*(code *)puVar1[0x13])(puVar1);
  }
  return;
}

