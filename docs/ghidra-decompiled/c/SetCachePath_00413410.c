
/* public: void __thiscall CConfigInfo::SetCachePath(class ATL::CStringT<wchar_t,class
   StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >) */

void __thiscall CConfigInfo::SetCachePath(CConfigInfo *this,LPCWSTR param_2)

{
  LPCWSTR pszPath;
  uint uVar1;
  DWORD DVar2;
  undefined4 uVar3;
  CConfigInfo *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pszPath = param_2;
                    /* 0x13410  464
                       ?SetCachePath@CConfigInfo@@QAEXV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@@Z
                        */
  puStack_c = &LAB_004464d2;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = this;
  if ((param_2 != (LPCWSTR)0x0) &&
     ((DVar2 = GetFileAttributesW(param_2), DVar2 == 0xffffffff || ((DVar2 & 0x10) == 0)))) {
    SHCreateDirectoryExW((HWND)0x0,pszPath,(SECURITY_ATTRIBUTES *)0x0);
  }
  DVar2 = GetFileAttributesW(param_2);
  if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
    uVar3 = FUN_004118a0(&local_14);
    local_8._0_1_ = 1;
    Ordinal_1518(uVar3,uVar1);
    local_8 = (uint)local_8._1_3_ << 8;
    Ordinal_1042();
  }
  Ordinal_1518(&param_2,uVar1);
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

