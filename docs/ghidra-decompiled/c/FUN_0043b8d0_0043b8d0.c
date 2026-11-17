
void __thiscall FUN_0043b8d0(void *this,undefined4 *param_1)

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
  *(undefined2 *)(puVar1 + 5) = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)((int)puVar1 + 0x16) = *(undefined2 *)((int)param_1 + 0x16);
  puVar1[6] = param_1[6];
  return;
}

