
void __thiscall FUN_004310b0(void *this,int param_1,int param_2)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x17 < *puVar1) && ((code *)puVar1[5] != (code *)0x0)) {
    (*(code *)puVar1[5])(puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
  }
  return;
}

