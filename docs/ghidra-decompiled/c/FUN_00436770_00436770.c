
int __cdecl FUN_00436770(int *param_1)

{
  code *pcVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448838;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((param_1 == (int *)0x0) || (param_1[-2] != DAT_004640e4)) {
    iVar2 = 0;
  }
  else {
    pcVar1 = *(code **)(param_1[-1] + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1[-1],DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    iVar2 = param_1[-1];
  }
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  ExceptionList = local_10;
  return iVar2;
}

