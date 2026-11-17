
void __fastcall FUN_0040a640(LPCWSTR param_1)

{
  uint uVar1;
  HANDLE hFile;
  LPCVOID lpBuffer;
  DWORD nNumberOfBytesToWrite;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446199;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = param_1;
  hFile = CreateFileW(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    FUN_0040a400(&local_14);
    local_8 = 0;
    lpOverlapped = (LPOVERLAPPED)0x0;
    lpNumberOfBytesWritten = (LPDWORD)0x0;
    nNumberOfBytesToWrite = *(int *)(local_14 + -6) * 2;
    lpBuffer = (LPCVOID)Ordinal_5020();
    WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
    Ordinal_12430(0xffffffff,uVar1);
    CloseHandle(hFile);
    Ordinal_1042();
  }
  ExceptionList = local_10;
  return;
}

