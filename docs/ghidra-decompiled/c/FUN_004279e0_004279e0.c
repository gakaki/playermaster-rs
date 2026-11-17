
int * __thiscall FUN_004279e0(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x90) || ((code *)puVar1[0x23] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x23])(puVar1,*(undefined4 *)(param_2 + 4),0);
  FUN_0041fb60(param_1,iVar2);
  return param_1;
}

