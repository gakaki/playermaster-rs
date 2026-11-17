
undefined4 __thiscall FUN_00441710(void *this,undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x74) || ((code *)puVar1[0x1c] == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0x1c])(puVar1,param_1);
  return uVar2;
}

