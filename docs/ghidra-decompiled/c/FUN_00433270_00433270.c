
void __thiscall FUN_00433270(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((99 < *puVar1) && ((code *)puVar1[0x18] != (code *)0x0)) {
    (*(code *)puVar1[0x18])(puVar1,param_1);
  }
  return;
}

