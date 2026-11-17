
void __cdecl FUN_0041ecc0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004477d4;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)Ordinal_1506(0xc,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00424e50(puVar1 + 2);
  }
  *puVar1 = DAT_00464044;
  puVar1[1] = param_2;
  *param_1 = (int)(puVar1 + 2);
  ExceptionList = local_10;
  return;
}

