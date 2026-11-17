
undefined4 * __fastcall FUN_00407090(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445d1c;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  Ordinal_296(uVar1);
  local_8 = 0;
  *param_1 = 0xffffffff;
  param_1[0xb] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 1;
  param_1[7] = 0;
  param_1[9] = 0xffffff;
  Ordinal_1520(&DAT_0044d16c);
  ExceptionList = local_10;
  return param_1;
}

