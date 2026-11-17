
void __thiscall FUN_00433330(void *this,undefined1 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x23 < *puVar1) && ((code *)puVar1[8] != (code *)0x0)) {
    (*(code *)puVar1[8])(puVar1,param_1);
  }
  return;
}

