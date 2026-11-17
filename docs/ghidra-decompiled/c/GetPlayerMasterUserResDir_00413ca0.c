
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetPlayerMasterUserResDir(void) */

int * __thiscall CConfigInfo::GetPlayerMasterUserResDir(CConfigInfo *this)

{
  LPCWSTR pszPath;
  DWORD DVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  LPCWSTR local_1c;
  undefined4 local_18;
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x13ca0  278
                       ?GetPlayerMasterUserResDir@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@XZ
                        */
  puStack_c = &LAB_00446c4c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = 0;
  Ordinal_280(this + 0x48,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  local_18 = 1;
  Ordinal_1687(L"UserRes\\");
  local_1c = (LPCWSTR)*in_stack_00000004;
  if (local_1c != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(local_1c);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,local_1c,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  FUN_00405ae0(&local_14,in_stack_00000004,L"CltBg_Gif\\");
  local_8 = 1;
  local_1c = local_14;
  if (local_14 != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(local_14);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,local_1c,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  Ordinal_1687(L"thumb\\");
  local_1c = local_14;
  if (local_14 != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(local_14);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,local_1c,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  uVar2 = FUN_00405ae0(&local_1c,in_stack_00000004,L"CltFont_Gif\\");
  local_8._0_1_ = 2;
  Ordinal_1518(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  Ordinal_1042();
  pszPath = local_14;
  if (local_14 != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(local_14);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,pszPath,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  Ordinal_1687(L"thumb\\");
  if (local_14 != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(local_14);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,local_14,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  Ordinal_1042();
  ExceptionList = local_10;
  return in_stack_00000004;
}

