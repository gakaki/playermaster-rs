
int * __thiscall FUN_00427990(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xac) || ((code *)puVar1[0x2a] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x2a])(puVar1,0);
  FUN_00428130(param_1,iVar2);
  return param_1;
}

