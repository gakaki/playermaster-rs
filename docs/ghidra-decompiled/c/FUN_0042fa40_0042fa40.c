
void __thiscall FUN_0042fa40(void *this,undefined1 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x87 < *puVar1) && ((code *)puVar1[0x21] != (code *)0x0)) {
    (*(code *)puVar1[0x21])(puVar1,param_1);
  }
  return;
}

