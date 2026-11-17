
void __thiscall FUN_0042e590(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x27 < *puVar1) && ((code *)puVar1[9] != (code *)0x0)) {
    (*(code *)puVar1[9])(puVar1,param_1);
  }
  return;
}

