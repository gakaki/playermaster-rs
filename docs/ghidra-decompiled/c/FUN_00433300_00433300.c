
void __thiscall FUN_00433300(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x6b < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) {
    (*(code *)puVar1[0x1a])(puVar1,param_1);
  }
  return;
}

