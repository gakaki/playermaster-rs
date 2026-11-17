
void __thiscall FUN_0042f660(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xeb < *puVar1) && ((code *)puVar1[0x3a] != (code *)0x0)) {
    (*(code *)puVar1[0x3a])(puVar1,param_1);
  }
  return;
}

