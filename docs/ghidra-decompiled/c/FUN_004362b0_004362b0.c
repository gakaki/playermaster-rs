
void __thiscall FUN_004362b0(void *this,int param_1)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x53 < *puVar1) && ((code *)puVar1[0x14] != (code *)0x0)) {
    (*(code *)puVar1[0x14])(puVar1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

