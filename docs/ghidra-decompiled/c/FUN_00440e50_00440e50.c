
bool __fastcall FUN_00440e50(CGridCellBase *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 100) || ((code *)puVar1[0x18] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x18])(puVar1);
  return iVar2 != 0;
}

