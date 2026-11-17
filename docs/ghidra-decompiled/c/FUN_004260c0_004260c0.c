
void __fastcall FUN_004260c0(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x1f < *puVar1) && ((code *)puVar1[7] != (code *)0x0)) {
    (*(code *)puVar1[7])(puVar1);
  }
  return;
}

