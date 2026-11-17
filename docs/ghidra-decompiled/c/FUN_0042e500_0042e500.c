
void __thiscall FUN_0042e500(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x1f < *puVar1) && ((code *)puVar1[7] != (code *)0x0)) {
    (*(code *)puVar1[7])(puVar1,param_1);
  }
  return;
}

