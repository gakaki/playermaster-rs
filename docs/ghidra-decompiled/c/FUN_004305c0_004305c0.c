
undefined4 __cdecl FUN_004305c0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004494e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + -8) == DAT_004640ec) {
    pcVar1 = *(code **)(*(int *)(param_1 + -4) + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(*(int *)(param_1 + -4),DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    uVar2 = *(undefined4 *)(param_1 + -4);
  }
  else {
    uVar2 = FUN_0042ac10();
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return uVar2;
}

