
void __thiscall FUN_0042f750(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xbb < *puVar1) && ((code *)puVar1[0x2e] != (code *)0x0)) {
    (*(code *)puVar1[0x2e])(puVar1,param_1);
  }
  return;
}

