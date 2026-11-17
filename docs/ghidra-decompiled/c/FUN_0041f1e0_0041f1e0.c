
void FUN_0041f1e0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_3 != 0)) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_8 = 2;
    FUN_0041ebc0((int *)((int)register0x00000010 + -0x2c),param_3);
    local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
    local_1c = 0;
    if (param_2 != 0) {
      local_1c = param_2;
    }
    local_18 = '\0';
    local_8 = CONCAT31(local_8._1_3_,3);
    (**(code **)*puVar1)(&local_20);
    local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
    if (local_1c != 0) {
      if (local_18 != '\0') {
        cef_string_utf16_clear(local_1c);
        Ordinal_1508(local_1c);
      }
      local_1c = 0;
      local_18 = '\0';
    }
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

