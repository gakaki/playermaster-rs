
void __fastcall FUN_0042e990(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0xe3 < *puVar1) && ((code *)puVar1[0x38] != (code *)0x0)) {
    (*(code *)puVar1[0x38])(puVar1);
  }
  return;
}

