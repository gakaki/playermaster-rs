
int * __thiscall FUN_0043bc50(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)))();
  }
  iVar2 = *(int *)this;
  *(int *)this = iVar1;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 4 + *(int *)(*(int *)(iVar2 + 4) + 4)) + 4))();
  }
  return this;
}

