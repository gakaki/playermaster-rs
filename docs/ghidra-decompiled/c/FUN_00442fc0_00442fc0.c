
undefined4 __fastcall FUN_00442fc0(CGridCellBase *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x30) || ((code *)puVar1[0xb] == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0xb])(puVar1);
  return uVar2;
}

