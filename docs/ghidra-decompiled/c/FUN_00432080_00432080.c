
undefined4 * __cdecl FUN_00432080(int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004486e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)Ordinal_1506(0x48,DAT_0046400c ^ (int)register0x00000010 - 4U);
    local_8._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00437190(puVar1);
    }
    puVar1[2] = param_1;
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)*puVar1)();
    puVar1 = puVar1 + 4;
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return puVar1;
}

