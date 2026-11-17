
void __fastcall FUN_00405ee0(undefined4 *param_1)

{
  uint uVar1;
  BOOL BVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int *piVar4;
  int iVar5;
  int local_138;
  undefined1 local_134 [4];
  LPCWSTR local_130;
  LPCWSTR local_12c;
  undefined1 *local_128;
  undefined1 local_124 [124];
  undefined1 *local_a8;
  undefined1 local_a4 [128];
  _SYSTEMTIME local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445b0b;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_a4 + 0xa0);
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  local_14 = uVar1;
  FUN_00406550();
  local_8 = 0;
  FUN_00405ae0(&local_130,&local_138,L"CrashHandler.dll");
  local_8 = CONCAT31(local_8._1_3_,1);
  BVar2 = PathFileExistsW(local_130);
  if (BVar2 != 0) {
    hModule = LoadLibraryW(local_130);
    *param_1 = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar3 = GetProcAddress(hModule,"CH_Register");
      if (pFVar3 != (FARPROC)0x0) {
        (*pFVar3)("B7FB50E7-EA3B-4f95-A02C-81CE02ED886A");
      }
      pFVar3 = GetProcAddress((HMODULE)*param_1,"StartCrashDoctor");
      if (pFVar3 == (FARPROC)0x0) {
        FreeLibrary((HMODULE)*param_1);
        *param_1 = 0;
      }
      else {
        FUN_004063b0(&local_12c);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_a8 = local_a4;
        FUN_004060f0(&local_a8,local_12c,3);
        MakeSureDirectoryPathExists(local_a8);
        if (local_a8 != local_a4) {
          free(local_a8);
        }
        GetLocalTime(&local_24);
        Ordinal_296();
        local_8._0_1_ = 3;
        Ordinal_4772(local_134,L"crash(%.4d-%.2d-%.2d).log",local_24.wYear,local_24.wMonth,
                     local_24.wDay);
        Ordinal_1684(local_134);
        piVar4 = FUN_00406340(&local_128,local_12c);
        local_8 = CONCAT31(local_8._1_3_,4);
        iVar5 = (*pFVar3)(*piVar4,0,0);
        param_1[1] = iVar5;
        if (local_128 != local_124) {
          free(local_128);
        }
        Ordinal_1042();
        Ordinal_1042();
      }
    }
  }
  Ordinal_1042(uVar1);
  Ordinal_1042();
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_a4 + 0xa0));
  return;
}

