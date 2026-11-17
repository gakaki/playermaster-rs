
int * __thiscall FUN_00429a10(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x24) || ((code *)puVar1[8] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[8])(puVar1,0);
  FUN_0041f660(param_1,iVar2);
  return param_1;
}

