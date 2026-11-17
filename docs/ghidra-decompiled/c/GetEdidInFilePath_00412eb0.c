
/* public: class ATL::CStringT<wchar_t,class StrTraitMFC_DLL<wchar_t,class ATL::ChTraitsCRT<wchar_t>
   > > __thiscall CConfigInfo::GetEdidInFilePath(void) */

undefined4 __thiscall CConfigInfo::GetEdidInFilePath(CConfigInfo *this)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_stack_00000004;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x12eb0  153
                       ?GetEdidInFilePath@CConfigInfo@@QAE?AV?$CStringT@_WV?$StrTraitMFC_DLL@_WV?$ChTraitsCRT@_W@ATL@@@@@ATL@@XZ
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446199;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  uVar3 = 0;
  piVar2 = (int *)GetPlayerMasterConfigDir(this);
  local_8 = 0;
  FUN_00405ae0(in_stack_00000004,piVar2,L"edidin.info");
  Ordinal_1042(uVar1,uVar3);
  ExceptionList = local_10;
  return in_stack_00000004;
}

