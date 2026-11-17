
undefined4 * __fastcall FUN_0041bc90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004474cc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 0, param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != (undefined4 *)0x0) {
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      *param_3 = 0;
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      local_8 = 5;
      FUN_00411ba0(param_3,param_1);
    }
    param_3 = param_3 + 0x10;
  }
  ExceptionList = local_10;
  return param_3;
}

