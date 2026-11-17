
undefined4 __thiscall FUN_0040f3a0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x9c) != 0) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x9c) + 0x98), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x360) = param_2;
    FUN_0040d3f0((int)this);
  }
  return 0;
}

