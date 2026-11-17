
int * __thiscall FUN_00431510(void *this,int *param_1,undefined1 param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x10])(puVar1,param_2,0);
  FUN_00422540(param_1,iVar2);
  return param_1;
}

