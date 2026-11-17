
int * __thiscall FUN_00421b10(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)))();
  }
  return this;
}

