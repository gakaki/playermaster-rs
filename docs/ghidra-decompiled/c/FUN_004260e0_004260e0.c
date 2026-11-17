
bool __fastcall FUN_004260e0(CGridCellBase *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x48) || ((code *)puVar1[0x11] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x11])(puVar1);
  return iVar2 != 0;
}

