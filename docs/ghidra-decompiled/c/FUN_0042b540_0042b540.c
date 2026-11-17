
bool __thiscall FUN_0042b540(CGridCellBase *param_1,undefined4 param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x74) || ((code *)puVar1[0x1c] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1c])(puVar1,param_2,param_3);
  return iVar2 != 0;
}

