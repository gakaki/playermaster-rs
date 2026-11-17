
void __fastcall FUN_00420c70(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x27 < *puVar1) && ((code *)puVar1[9] != (code *)0x0)) {
    (*(code *)puVar1[9])(puVar1);
  }
  return;
}

