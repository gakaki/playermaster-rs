
int * __thiscall FUN_004316f0(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x1b])(puVar1,iVar2,0);
  FUN_0042faa0(param_1,iVar2);
  return param_1;
}

