
void __fastcall FUN_0040dbc0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00464e48 + 4);
  if (((-1 < iVar1) && (iVar1 < 4)) && (iVar1 != param_1)) {
    *(int *)(DAT_00464e48 + 4) = param_1;
    FUN_00410660();
  }
  return;
}

