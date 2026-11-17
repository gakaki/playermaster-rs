
int * __cdecl FUN_0043da00(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004491f1;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  if (param_1 == param_2) {
    return param_3;
  }
  ExceptionList = &local_10;
  do {
    local_8 = 0;
    if (param_3 != (int *)0x0) {
      iVar1 = *param_1;
      *param_3 = iVar1;
      if (iVar1 != 0) {
        (*(code *)**(undefined4 **)(iVar1 + *(int *)(*(int *)(iVar1 + 4) + 4) + 4))(uVar2);
      }
    }
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  ExceptionList = local_10;
  return param_3;
}

