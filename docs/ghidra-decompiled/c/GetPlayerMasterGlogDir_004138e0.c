
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetPlayerMasterGlogDir(void) */

undefined4 * __thiscall CConfigInfo::GetPlayerMasterGlogDir(CConfigInfo *this)

{
  LPCWSTR lpFileName;
  DWORD DVar1;
  undefined4 *in_stack_00000004;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x138e0  270
                       ?GetPlayerMasterGlogDir@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@XZ
                        */
  puStack_c = &LAB_0044649a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  Ordinal_280(this + 0x48,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  Ordinal_1687(L"glog\\");
  lpFileName = (LPCWSTR)*in_stack_00000004;
  if (lpFileName != (LPCWSTR)0x0) {
    DVar1 = GetFileAttributesW(lpFileName);
    if ((DVar1 == 0xffffffff) || ((DVar1 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,lpFileName,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  ExceptionList = local_10;
  return in_stack_00000004;
}

