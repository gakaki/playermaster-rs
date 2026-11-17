
void __fastcall FUN_00421660(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0x37 < *puVar1) && ((code *)puVar1[0xd] != (code *)0x0)) {
    (*(code *)puVar1[0xd])(puVar1);
  }
  return;
}

