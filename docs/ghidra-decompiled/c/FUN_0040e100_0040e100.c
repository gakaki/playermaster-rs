
void __thiscall FUN_0040e100(void *this,int param_1,int *param_2)

{
  if ((param_1 != 0) && (*(int *)((int)this + 0x9c) != 0)) {
    param_2[1] = param_2[1] + *(int *)(*(int *)((int)this + 0x9c) + 4);
    *param_2 = *param_2 + 1;
    param_2[3] = param_2[3] + -1;
    param_2[2] = param_2[2] + -1;
  }
  return;
}

