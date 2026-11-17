
void FUN_00406550(void)

{
  uint uVar1;
  HMODULE hModule;
  DWORD DVar2;
  int iVar3;
  int local_220;
  WCHAR local_21c [260];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445b9c;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_21c + 0x10c);
  ExceptionList = &local_10;
  local_14 = uVar1;
  hModule = GetModuleHandleW((LPCWSTR)0x0);
  memset(local_21c,0,0x208);
  DVar2 = GetModuleFileNameW(hModule,local_21c,0x104);
  if (DVar2 == 0) {
    Ordinal_286(&DAT_0044d16c,uVar1);
  }
  else {
    Ordinal_286(local_21c,uVar1);
    local_8 = 0;
    iVar3 = Ordinal_12755(0x5c);
    Ordinal_3803(iVar3 + 1,(*(int *)(local_220 + -0xc) - iVar3) + -1);
    Ordinal_280(&local_220);
    Ordinal_1042();
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_21c + 0x10c));
  return;
}

