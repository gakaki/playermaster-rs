
int * __thiscall FUN_004299c0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x20) || ((code *)puVar1[7] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[7])(puVar1,0);
  FUN_0041f560(param_1,iVar2);
  return param_1;
}

