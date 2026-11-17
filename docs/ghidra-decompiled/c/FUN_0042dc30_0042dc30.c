
void __thiscall FUN_0042dc30(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x17 < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,param_1);
  }
  return;
}

