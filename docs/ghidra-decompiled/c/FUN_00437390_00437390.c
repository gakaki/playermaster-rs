
void __thiscall FUN_00437390(void *this,undefined4 *param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0xc4) == 0) {
    FUN_004375d0((int)this + 4);
  }
  *(undefined4 **)((int)this + 0xc4) = param_1;
  for (iVar1 = 0x30; this = (void *)((int)this + 4), iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *param_1;
    param_1 = param_1 + 1;
  }
  return;
}

