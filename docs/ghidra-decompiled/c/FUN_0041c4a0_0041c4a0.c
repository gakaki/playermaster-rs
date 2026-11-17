
undefined4 FUN_0041c4a0(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  wchar_t *local_1c;
  CStringT<wchar_t,StrTraitMFC_DLL<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  CRegister local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447655;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_14 + 0x10);
  ExceptionList = &local_10;
  CRegister::CRegister(local_14);
  local_8 = 1;
  Ordinal_286(L"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",uVar1);
  local_8._0_1_ = 2;
  lVar2 = CRegister::OpenKey(local_14,(HKEY__ *)0x80000002,local_1c,0,1);
  if (lVar2 == 0) {
    Ordinal_296();
    local_8._0_1_ = 3;
    CRegister::GetStringValue(local_14,L"ProcessorNameString",local_18);
    Ordinal_280(local_18);
    Ordinal_1042();
  }
  else {
    Ordinal_286(&DAT_0044d16c);
  }
  Ordinal_1042();
  local_8 = (uint)local_8._1_3_ << 8;
  CRegister::~CRegister(local_14);
  ExceptionList = local_10;
  return param_1;
}

