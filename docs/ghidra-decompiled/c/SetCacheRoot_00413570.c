
/* public: void __thiscall CConfigInfo::SetCacheRoot(class ATL::CStringT<wchar_t,class
   StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >) */

void __thiscall CConfigInfo::SetCacheRoot(undefined4 param_1,LPCWSTR param_2)

{
  LPCWSTR pWVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  HRESULT HVar5;
  BOOL BVar6;
  LPCITEMIDLIST local_224;
  WCHAR local_220 [262];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pWVar1 = param_2;
                    /* 0x13570  465
                       ?SetCacheRoot@CConfigInfo@@QAEXV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@@Z
                        */
  puStack_c = &LAB_00446bf5;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (uint)(local_220 + 0x10e);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar2;
  if ((param_2 != (LPCWSTR)0x0) &&
     ((DVar3 = GetFileAttributesW(param_2), DVar3 == 0xffffffff || ((DVar3 & 0x10) == 0)))) {
    SHCreateDirectoryExW((HWND)0x0,pWVar1,(SECURITY_ATTRIBUTES *)0x0);
  }
  DVar3 = GetFileAttributesW(param_2);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) == 0)) {
    uVar4 = FUN_00406550();
    local_8._0_1_ = 1;
    Ordinal_1518(uVar4,uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    Ordinal_1042();
    HVar5 = SHGetSpecialFolderLocation((HWND)0x0,5,&local_224);
    if ((-1 < HVar5) && (BVar6 = SHGetPathFromIDListW(local_224,local_220), BVar6 != 0)) {
      Ordinal_4772(&param_2,L"%s\\Colorlight\\PlayerMaster\\",local_220);
    }
    pWVar1 = param_2;
    if ((param_2 != (LPCWSTR)0x0) &&
       ((DVar3 = GetFileAttributesW(param_2), DVar3 == 0xffffffff || ((DVar3 & 0x10) == 0)))) {
      SHCreateDirectoryExW((HWND)0x0,pWVar1,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  Ordinal_1518(&param_2,uVar2);
  Ordinal_1042();
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_220 + 0x10e));
  return;
}

