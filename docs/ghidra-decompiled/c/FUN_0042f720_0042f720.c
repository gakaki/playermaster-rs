
void __thiscall FUN_0042f720(void *this,undefined1 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x6f < *puVar1) && ((code *)puVar1[0x1b] != (code *)0x0)) {
    (*(code *)puVar1[0x1b])(puVar1,param_1);
  }
  return;
}

