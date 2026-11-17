
undefined4 __thiscall FUN_00437030(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x34) || ((code *)puVar1[0xc] == (code *)0x0)) || (param_2 == 0)) {
    return 0;
  }
  uVar2 = (*(code *)puVar1[0xc])(puVar1,param_1,param_2,0);
  return uVar2;
}

