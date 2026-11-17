
void FUN_0040fbe0(LPARAM param_1)

{
  HWND hWnd;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  WCHAR local_208;
  undefined1 local_206 [510];
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (uint)(local_206 + 0x202);
  DAT_00464e78 = DAT_00464e74;
  EnumWindows(FUN_0040fbb0,param_1);
  puVar1 = DAT_00464e78;
  puVar3 = DAT_00464e74;
  if (DAT_00464e74 == DAT_00464e78) {
    FUN_0041d025(local_8 ^ (uint)(local_206 + 0x202));
    return;
  }
  do {
    hWnd = (HWND)*puVar3;
    local_208 = L'\0';
    memset(local_206,0,0x1fe);
    GetWindowTextW(hWnd,&local_208,0x100);
    OutputDebugStringW(&local_208);
    OutputDebugStringW(L"\n");
    iVar2 = StrCmpW(&local_208,L"LEDSetting");
    if (iVar2 == 0) {
      FUN_0041d025(local_8 ^ (uint)(local_206 + 0x202));
      return;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != puVar1);
  FUN_0041d025(local_8 ^ (uint)(local_206 + 0x202));
  return;
}

