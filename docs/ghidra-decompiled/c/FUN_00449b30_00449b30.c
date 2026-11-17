
void __fastcall FUN_00449b30(CGridCell *param_1)

{
  CACEdit aCStackY_90 [128];
  int in_stack_fffffff0;
  int in_stack_fffffff4;
  
  if (DAT_00464e74 != 0) {
    CGridCell::SetCoords(param_1,in_stack_fffffff0,in_stack_fffffff4);
    CACEdit::GetEdit(aCStackY_90 + 0x8b);
    Ordinal_1508(DAT_00464e74,param_1);
    DAT_00464e74 = 0;
    DAT_00464e78 = 0;
    DAT_00464e7c = 0;
  }
  return;
}

