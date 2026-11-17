
void __thiscall FUN_0042f0a0(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x8f < *puVar1) && ((code *)puVar1[0x23] != (code *)0x0)) {
    (*(code *)puVar1[0x23])(puVar1,param_1);
  }
  return;
}

