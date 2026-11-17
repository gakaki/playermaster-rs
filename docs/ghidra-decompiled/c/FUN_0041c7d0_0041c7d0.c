
void FUN_0041c7d0(undefined4 param_1)

{
  uint uVar1;
  _MEMORYSTATUSEX local_58;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004476ca;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_58.dwLength = 0x40;
  local_18 = uVar1;
  GlobalMemoryStatusEx(&local_58);
  Ordinal_296(uVar1);
  local_8 = 0;
  Ordinal_4772(param_1,L"Total: %.1d(G), available: %.1d(G)",
               local_58.ullTotalPhys._0_4_ >> 0x1e | local_58.ullTotalPhys._4_4_ << 2,
               local_58.ullTotalPhys._4_4_ >> 0x1e,
               local_58.ullAvailPhys._0_4_ >> 0x1e | local_58.ullAvailPhys._4_4_ << 2,
               local_58.ullAvailPhys._4_4_ >> 0x1e);
  ExceptionList = local_10;
  FUN_0041d025(local_18 ^ (int)register0x00000010 - 4U);
  return;
}

