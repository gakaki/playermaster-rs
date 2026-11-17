
int * __thiscall FUN_004276e0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 200) || ((code *)puVar1[0x31] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x31])(puVar1,0);
  FUN_004282f0(param_1,iVar2);
  return param_1;
}

