
void __thiscall FUN_00426dc0(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((0x2b < *puVar1) && ((code *)puVar1[10] != (code *)0x0)) {
    (*(code *)puVar1[10])(puVar1,*(undefined4 *)(param_1 + 4),param_2);
  }
  return;
}

