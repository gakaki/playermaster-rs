
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetLanEncryptionFilePath(void) */

undefined4 * __thiscall CConfigInfo::GetLanEncryptionFilePath(CConfigInfo *this)

{
  int *piVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined4 *in_stack_00000004;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12f90  235
                       ?GetLanEncryptionFilePath@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@XZ
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446b6e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  Ordinal_296(DAT_0046400c ^ (uint)(local_18 + 0x14));
  local_8 = 0;
  local_14 = 1;
  piVar1 = (int *)GetPlayerMasterConfigDir(this);
  local_8 = 1;
  uVar2 = FUN_00405ae0(local_18,piVar1,L"LanEn.dat");
  local_8._0_1_ = 2;
  Ordinal_1518(uVar2);
  Ordinal_1042();
  local_8 = (uint)local_8._1_3_ << 8;
  Ordinal_1042();
  DVar3 = GetFileAttributesW((LPCWSTR)*in_stack_00000004);
  if ((DVar3 == 0xffffffff) || ((DVar3 & 0x10) != 0)) {
    piVar1 = (int *)GetPlayerMasterConfigDir(this);
    local_8 = 3;
    uVar2 = FUN_00405ae0(local_1c,piVar1,L"LanEn.info");
    local_8 = CONCAT31(local_8._1_3_,4);
    Ordinal_1518(uVar2);
    Ordinal_1042();
    Ordinal_1042();
  }
  ExceptionList = local_10;
  return in_stack_00000004;
}

