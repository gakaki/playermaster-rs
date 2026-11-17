
void FUN_0041c230(void)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  _union_530 local_168 [9];
  undefined4 local_144;
  int local_140;
  uint local_13c;
  int local_138;
  undefined1 local_134 [4];
  _OSVERSIONINFOW local_130;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004475ec;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)((&local_130)[1].szCSDVersion + 2);
  ExceptionList = &local_10;
  local_144 = 0;
  local_14 = uVar1;
  hModule = LoadLibraryW(L"ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    Ordinal_286(L"none");
    goto LAB_0041c47f;
  }
  pFVar2 = GetProcAddress(hModule,"RtlGetNtVersionNumbers");
  (*pFVar2)(&local_140,&local_138,&local_13c,uVar1);
  local_13c = local_13c & 0xffff;
  memset(&local_130,0,0x11c);
  local_130.dwOSVersionInfoSize = 0x11c;
  GetVersionExW(&local_130);
  bVar4 = local_18._2_1_ != '\x01';
  printf(&DAT_0044fa58,local_140,local_138);
  Ordinal_296();
  local_8 = 0;
  if (local_140 == 10) {
    if (local_138 != 0) goto LAB_0041c464;
    if (local_13c < 22000) {
      pwVar5 = L"win10";
    }
    else {
      pwVar5 = L"win11";
    }
LAB_0041c45e:
    Ordinal_1520(pwVar5);
  }
  else {
    if (local_140 == 6) {
      if (local_138 == 3) {
        pwVar5 = L"win8.1";
        if (bVar4) {
          pwVar5 = L"windows server 2012 r2";
        }
      }
      else if (local_138 == 2) {
        pwVar5 = L"win8";
        if (bVar4) {
          pwVar5 = L"windows server 2012";
        }
      }
      else if (local_138 == 1) {
        pwVar5 = L"win7";
        if (bVar4) {
          pwVar5 = L"Windows Server 2008 r2";
        }
      }
      else {
        if (local_138 != 0) goto LAB_0041c464;
        pwVar5 = L"vista";
        if (bVar4) {
          pwVar5 = L"widows server 2008";
        }
      }
      goto LAB_0041c45e;
    }
    if (local_140 == 5) {
      if (local_138 == 2) {
        iVar3 = GetSystemMetrics(0x59);
        if (iVar3 == 0) {
          pwVar5 = L"windows server 2003";
        }
        else {
          pwVar5 = L"windows server 2003 r2";
        }
        Ordinal_1520(pwVar5);
        if ((local_18 & 0x8000) != 0) {
          Ordinal_1520(L"windows home server");
        }
        GetSystemInfo((LPSYSTEM_INFO)&local_168[0].s);
        if ((bVar4) || (local_168[0].s.wProcessorArchitecture != 9)) goto LAB_0041c464;
        pwVar5 = L"xp profressional 64";
      }
      else if (local_138 == 1) {
        pwVar5 = L"windows xp";
      }
      else {
        if (local_138 != 0) goto LAB_0041c464;
        pwVar5 = L"windows 2000";
      }
      goto LAB_0041c45e;
    }
  }
LAB_0041c464:
  Ordinal_280(local_134);
  Ordinal_1042();
LAB_0041c47f:
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)((&local_130)[1].szCSDVersion + 2));
  return;
}

