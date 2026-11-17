
void __thiscall FUN_0042e4e0(void *this,int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x3f < *puVar1) && ((code *)puVar1[0xf] != (code *)0x0)) {
    (*(code *)puVar1[0xf])(puVar1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

