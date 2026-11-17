
int * __cdecl FUN_00428130(int *param_1,int param_2)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447ea1;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  ExceptionList = &local_10;
  if (*(int *)(param_2 + -0xc) != DAT_004640a4) {
    FUN_00428950(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)(param_2 + -8);
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)(DAT_0046400c ^ (int)register0x00000010 - 4U);
  }
  local_8 = 1;
  (**(code **)(**(int **)(param_2 + -4) + 4))();
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)*piVar1)();
  }
  local_8 = local_8 & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

