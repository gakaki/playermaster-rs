
void __thiscall FUN_0042e5b0(void *this,int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x2f < *puVar1) && ((code *)puVar1[0xb] != (code *)0x0)) {
    (*(code *)puVar1[0xb])(puVar1,*(undefined4 *)(param_1 + 4));
  }
  return;
}

