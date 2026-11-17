
void FUN_0040a6e0(void)

{
  HMODULE hModule;
  FARPROC lpBaseAddress;
  HANDLE hProcess;
  undefined1 *lpBuffer;
  SIZE_T nSize;
  SIZE_T *lpNumberOfBytesWritten;
  SIZE_T local_70;
  undefined1 local_6c;
  int local_6b;
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  hModule = LoadLibraryW(L"kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    lpBaseAddress = GetProcAddress(hModule,"SetUnhandledExceptionFilter");
    if (lpBaseAddress != (FARPROC)0x0) {
      local_6c = 0xe9;
      local_6b = (int)&UNK_00405a7b - (int)lpBaseAddress;
      lpNumberOfBytesWritten = &local_70;
      nSize = 5;
      lpBuffer = &local_6c;
      hProcess = GetCurrentProcess();
      WriteProcessMemory(hProcess,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesWritten);
      FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
      return;
    }
  }
  FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
  return;
}

