
uint __thiscall FUN_0040bc70(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined1 local_c [8];
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0xc))(local_c,param_1);
  if ((piVar1[1] == param_2[1]) && (piVar1 = (int *)*piVar1, piVar1 == (int *)*param_2)) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}

