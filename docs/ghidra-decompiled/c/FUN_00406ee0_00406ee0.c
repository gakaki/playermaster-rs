
BOOL FUN_00406ee0(LPCWSTR param_1)

{
  BOOL BVar1;
  SHELLEXECUTEINFOW local_40;
  
  memset(&local_40,0,0x3c);
  local_40.lpFile = param_1;
  local_40.cbSize = 0x3c;
  local_40.lpVerb = L"open";
  local_40.nShow = 0;
  local_40.fMask = 0x440;
  BVar1 = ShellExecuteExW(&local_40);
  if (BVar1 != 0) {
    TerminateProcess(local_40.hProcess,1);
  }
  return BVar1;
}

