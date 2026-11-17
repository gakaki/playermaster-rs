
int * __thiscall FUN_00427a30(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x94) || ((code *)puVar1[0x24] == (code *)0x0)) || (param_2 < 0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x24])(puVar1,param_2,0);
  FUN_0041fb60(param_1,iVar2);
  return param_1;
}

