
undefined4 __fastcall FUN_00432fb0(CGridCellBase *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  CGridCellBase::EndEdit(param_1);
  puVar1 = *(uint **)(param_1 + -4);
  if ((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) {
    return 0xffffffff;
  }
  uVar2 = (*(code *)puVar1[0x1b])(puVar1);
  return uVar2;
}

