
void __fastcall FUN_004011a0(undefined4 *param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  FILETIME local_40;
  _FILETIME local_34;
  _SYSTEMTIME local_2c;
  _SYSTEMTIME local_1c;
  uint local_c;
  undefined1 auStack_8 [4];
  
  local_c = DAT_0046400c ^ (uint)(auStack_8 + 4);
  GetLocalTime(&local_2c);
  SystemTimeToFileTime(&local_2c,&local_34);
  local_40.dwLowDateTime = local_34.dwLowDateTime;
  local_40.dwHighDateTime = local_34.dwHighDateTime;
  FileTimeToSystemTime(&local_40,&local_1c);
  *param_2 = ((local_1c.wYear - 0x3c) * 0x10 | local_1c.wMonth & 0xf) << 5 | local_1c.wDay & 0x1f;
  *param_3 = (local_1c.wMinute & 0x3f | local_1c.wHour << 6) << 5 | local_1c.wSecond * 2 & 0x1f;
  uVar1 = __alldiv(local_34.dwLowDateTime + 0x2ac18000,
                   (local_34.dwHighDateTime + 0xfe624e22) -
                   (uint)(local_34.dwLowDateTime < 0xd53e8000),10000000,0);
  *param_1 = (int)uVar1;
  FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
  return;
}

