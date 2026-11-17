
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetScheduleOrCommandRootDir(int) */

int __thiscall CConfigInfo::GetScheduleOrCommandRootDir(CConfigInfo *this,int param_1)

{
  LPCWSTR lpFileName;
  uint uVar1;
  DWORD DVar2;
  int in_stack_00000008;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x13c00  306
                       ?GetScheduleOrCommandRootDir@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@H@Z
                        */
  puStack_c = &LAB_0044649a;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  GetPlayerMasterScheduleDir(this);
  local_8 = 0;
  if (in_stack_00000008 == 0) {
    pwVar3 = L"Command\\";
  }
  else {
    pwVar3 = L"Schedule\\";
  }
  Ordinal_1687(pwVar3,uVar1);
  lpFileName = *(LPCWSTR *)param_1;
  if (lpFileName != (LPCWSTR)0x0) {
    DVar2 = GetFileAttributesW(lpFileName);
    if ((DVar2 == 0xffffffff) || ((DVar2 & 0x10) == 0)) {
      SHCreateDirectoryExW((HWND)0x0,lpFileName,(SECURITY_ATTRIBUTES *)0x0);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

