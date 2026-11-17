
void __fastcall
FUN_00401260(HANDLE param_1,uint *param_2,DWORD *param_3,undefined4 *param_4,uint *param_5)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_6c;
  int local_68;
  uint *local_64;
  FILETIME local_60;
  DWORD local_58;
  short local_54 [2];
  _BY_HANDLE_FILE_INFORMATION local_50;
  _SYSTEMTIME local_1c;
  uint local_c;
  undefined1 auStack_8 [4];
  
  local_c = DAT_0046400c ^ (uint)(auStack_8 + 4);
  local_60.dwHighDateTime = (DWORD)param_5;
  local_64 = param_2;
  BVar1 = GetFileInformationByHandle(param_1,&local_50);
  if (BVar1 == 0) {
    FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
    return;
  }
  uVar3 = (uint)((local_50.dwFileAttributes & 1) != 0);
  if ((local_50.dwFileAttributes & 2) != 0) {
    uVar3 = uVar3 | 2;
  }
  if ((local_50.dwFileAttributes & 4) != 0) {
    uVar3 = uVar3 | 4;
  }
  if ((local_50.dwFileAttributes & 0x10) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((local_50.dwFileAttributes & 0x20) != 0) {
    uVar3 = uVar3 | 0x20;
  }
  if ((local_50.dwFileAttributes & 0x10) == 0) {
    uVar3 = uVar3 | 0x80000000;
  }
  else {
    uVar3 = uVar3 | 0x40000000;
  }
  uVar4 = uVar3 | 0x1000000;
  if ((local_50.dwFileAttributes & 1) == 0) {
    uVar4 = uVar3 | 0x1800000;
  }
  DVar2 = GetFileSize(param_1,(LPDWORD)0x0);
  if (0x28 < DVar2) {
    SetFilePointer(param_1,0,(PLONG)0x0,0);
    ReadFile(param_1,local_54,2,&local_58,(LPOVERLAPPED)0x0);
    SetFilePointer(param_1,0x24,(PLONG)0x0,0);
    ReadFile(param_1,&local_6c,4,&local_58,(LPOVERLAPPED)0x0);
    if ((local_54[0] == 0x54ad) && (local_6c + 0x34U < DVar2)) {
      SetFilePointer(param_1,local_6c,(PLONG)0x0,0);
      ReadFile(param_1,&local_68,4,&local_58,(LPOVERLAPPED)0x0);
      if ((local_68 == 0x5a4d) ||
         (((local_68 == 0x454e || (local_68 == 0x454c)) || (local_68 == 0x4550)))) {
        uVar4 = uVar4 | 0x400000;
      }
    }
  }
  if (local_64 != (uint *)0x0) {
    *local_64 = uVar4;
  }
  if (param_3 != (DWORD *)0x0) {
    *param_3 = DVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    uVar5 = __alldiv(local_50.ftLastAccessTime.dwLowDateTime + 0x2ac18000,
                     (local_50.ftLastAccessTime.dwHighDateTime + 0xfe624e22) -
                     (uint)(local_50.ftLastAccessTime.dwLowDateTime < 0xd53e8000),10000000,0);
    *param_4 = (int)uVar5;
    uVar5 = __alldiv(local_50.ftLastWriteTime.dwLowDateTime + 0x2ac18000,
                     local_50.ftLastWriteTime.dwHighDateTime +
                     (-0x19db1de - (uint)(local_50.ftLastWriteTime.dwLowDateTime < 0xd53e8000)),
                     10000000,0);
    param_4[1] = (int)uVar5;
    uVar5 = __alldiv(local_50.ftCreationTime.dwLowDateTime + 0x2ac18000,
                     (local_50.ftCreationTime.dwHighDateTime + 0xfe624e22) -
                     (uint)(local_50.ftCreationTime.dwLowDateTime < 0xd53e8000),10000000,0);
    param_4[2] = (int)uVar5;
  }
  DVar2 = local_60.dwHighDateTime;
  if ((uint *)local_60.dwHighDateTime != (uint *)0x0) {
    local_60.dwLowDateTime = local_50.ftLastWriteTime.dwLowDateTime;
    local_60.dwHighDateTime = local_50.ftLastWriteTime.dwHighDateTime;
    FileTimeToSystemTime(&local_60,&local_1c);
    *(uint *)DVar2 =
         (((CONCAT22(local_1c.wMonth,local_1c.wYear) + -0x3c) * 0x10 & 0x7ffU |
          local_1c.wMonth & 0xf) << 5 | local_1c.wDay & 0x1f) << 0x10 |
         (local_1c.wMinute & 0x3f | (local_1c.wHour & 0x1f) << 6) << 5 |
         (uint)local_1c.wSecond * 2 & 0x1f;
  }
  FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
  return;
}

