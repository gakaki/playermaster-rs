
void __thiscall FUN_00426c60(void *this,undefined4 param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x57 < *puVar1) && ((code *)puVar1[0x15] != (code *)0x0)) {
    (*(code *)puVar1[0x15])(puVar1,param_1);
  }
  return;
}

