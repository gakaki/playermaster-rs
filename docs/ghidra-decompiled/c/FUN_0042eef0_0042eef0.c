
void __fastcall FUN_0042eef0(CGridCellBase *param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((0xcb < *puVar1) && ((code *)puVar1[0x32] != (code *)0x0)) {
    (*(code *)puVar1[0x32])(puVar1);
  }
  return;
}

