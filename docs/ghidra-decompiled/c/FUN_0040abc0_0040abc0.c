
int * __thiscall FUN_0040abc0(void *this,int *param_1)

{
  int iVar1;
  
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 8;
  }
  *param_1 = iVar1;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4))();
  }
  return param_1;
}

