
void __thiscall FUN_0043c610(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[5] = param_1[5];
  return;
}

