
int * __cdecl FUN_004367f0(int *param_1,int param_2)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004487e1;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  ExceptionList = &local_10;
  if (*(int *)(param_2 + -0xc) != DAT_004640f0) {
    FUN_00428950(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  iVar1 = *(int *)(param_2 + -8);
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)))
              (DAT_0046400c ^ (int)register0x00000010 - 4U);
  }
  local_8 = 1;
  (**(code **)(**(int **)(param_2 + -4) + 4))();
  *param_1 = iVar1;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)))();
  }
  local_8 = local_8 & 0xffffff00;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 4 + iVar1) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

