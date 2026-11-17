
void __thiscall FUN_00437100(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)((int)this + -4);
  if (((0x23 < *puVar1) && ((code *)puVar1[8] != (code *)0x0)) && (param_2 != 0)) {
    (*(code *)puVar1[8])(puVar1,param_1,param_2,0);
  }
  return;
}

