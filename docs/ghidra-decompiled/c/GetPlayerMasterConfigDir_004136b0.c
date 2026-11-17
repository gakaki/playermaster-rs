
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetPlayerMasterConfigDir(void) */

void __thiscall CConfigInfo::GetPlayerMasterConfigDir(CConfigInfo *this)

{
  LPCWSTR lpFileName;
  uint uVar1;
  HRESULT HVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 *in_stack_00000004;
  LPCITEMIDLIST local_224;
  WCHAR local_220 [262];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x136b0  268
                       ?GetPlayerMasterConfigDir@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@XZ
                        */
  puStack_c = &LAB_00445b63;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_220 + 0x10e);
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar1;
  FUN_00406550();
  local_8 = 0;
  HVar2 = SHGetSpecialFolderLocation((HWND)0x0,5,&local_224);
  if (-1 < HVar2) {
    BVar3 = SHGetPathFromIDListW(local_224,local_220);
    if (BVar3 != 0) {
      Ordinal_4772();
    }
  }
  Ordinal_1687(L"UserConfig\\",uVar1);
  lpFileName = (LPCWSTR)*in_stack_00000004;
  if (lpFileName != (LPCWSTR)0x0) {
    DVar4 = GetFileAttributesW(lpFileName);
    if ((DVar4 == 0xffffffff) || ((DVar4 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,lpFileName,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_220 + 0x10e));
  return;
}

