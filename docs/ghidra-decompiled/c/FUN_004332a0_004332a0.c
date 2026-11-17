
void __thiscall FUN_004332a0(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x37 < *puVar1) && ((code *)puVar1[0xd] != (code *)0x0)) {
    (*(code *)puVar1[0xd])(puVar1,param_1);
  }
  return;
}

