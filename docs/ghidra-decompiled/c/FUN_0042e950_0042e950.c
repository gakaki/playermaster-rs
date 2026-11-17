
void __thiscall FUN_0042e950(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xdf < *puVar1) && ((code *)puVar1[0x37] != (code *)0x0)) {
    (*(code *)puVar1[0x37])(puVar1,param_1,param_2,param_3);
  }
  return;
}

