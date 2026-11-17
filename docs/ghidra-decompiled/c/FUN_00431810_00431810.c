
int * __thiscall FUN_00431810(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x40) || ((code *)puVar1[0xf] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xf])(puVar1,iVar2,0);
  FUN_0041e740(param_1,iVar2);
  return param_1;
}

