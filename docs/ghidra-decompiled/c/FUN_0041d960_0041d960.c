
void __fastcall FUN_0041d960(undefined4 *param_1)

{
  uint uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 ***local_8;
  
  puStack_c = &LAB_00447709;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_2c + 10);
  ExceptionList = &local_10;
  local_8 = (undefined4 ***)0x1;
  local_14 = uVar1;
  FUN_0041e070(param_1 + 2,local_2c);
  ppppuVar2 = local_2c;
  if (0xf < local_18) {
    ppppuVar2 = local_2c[0];
  }
  cef_log(param_1[0x28],param_1[0x29],*param_1,ppppuVar2,uVar1);
  if (0xf < local_18) {
    Ordinal_1508(local_2c[0]);
  }
  SetLastError(param_1[0x2a]);
  FUN_0041da20(param_1 + 2);
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_2c + 10));
  return;
}

