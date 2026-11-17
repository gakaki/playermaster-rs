
int * __thiscall FUN_00427530(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xbc) || ((code *)puVar1[0x2e] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x2e])(puVar1,0);
  FUN_00428200(param_1,iVar2);
  return param_1;
}

