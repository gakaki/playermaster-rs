
undefined4 __fastcall FUN_00432f50(CGridCellBase *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x60) || ((code *)puVar1[0x17] == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0x17])(puVar1);
  return uVar2;
}

