
undefined4 __thiscall FUN_004416e0(void *this,undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0x1b])(puVar1,param_1);
  return uVar2;
}

