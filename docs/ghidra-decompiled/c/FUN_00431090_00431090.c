
void __fastcall FUN_00431090(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x1b < *puVar1) && ((code *)puVar1[6] != (code *)0x0)) {
    (*(code *)puVar1[6])(puVar1);
  }
  return;
}

