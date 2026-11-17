
bool __fastcall FUN_0042f100(CGridCellBase *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0xf8) || ((code *)puVar1[0x3d] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x3d])(puVar1);
  return iVar2 != 0;
}

