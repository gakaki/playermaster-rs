
bool __fastcall FUN_0042f160(CGridCellBase *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x80) || ((code *)puVar1[0x1f] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1f])(puVar1);
  return iVar2 != 0;
}

