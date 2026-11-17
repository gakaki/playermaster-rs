
void __fastcall FUN_00420de0(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x23 < *puVar1) && ((code *)puVar1[8] != (code *)0x0)) {
    (*(code *)puVar1[8])(puVar1);
  }
  return;
}

