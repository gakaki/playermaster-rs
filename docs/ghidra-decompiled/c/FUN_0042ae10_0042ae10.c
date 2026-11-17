
bool __fastcall FUN_0042ae10(CGridCellBase *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x38) || ((code *)puVar1[0xd] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0xd])(puVar1);
  return iVar2 != 0;
}

