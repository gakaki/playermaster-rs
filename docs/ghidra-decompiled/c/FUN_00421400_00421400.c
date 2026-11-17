
void __fastcall FUN_00421400(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x2b < *puVar1) && ((code *)puVar1[10] != (code *)0x0)) {
    (*(code *)puVar1[10])(puVar1);
  }
  return;
}

