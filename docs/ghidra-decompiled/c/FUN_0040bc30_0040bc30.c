
uint __thiscall FUN_0040bc30(void *this,int *param_1,int param_2)

{
  if ((this == (void *)param_1[1]) && (param_1 = (int *)*param_1, param_1 == (int *)param_2)) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return (uint)param_1 & 0xffffff00;
}

