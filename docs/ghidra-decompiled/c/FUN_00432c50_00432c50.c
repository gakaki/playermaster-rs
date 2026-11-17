
void __fastcall FUN_00432c50(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x17 < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1);
  }
  return;
}

