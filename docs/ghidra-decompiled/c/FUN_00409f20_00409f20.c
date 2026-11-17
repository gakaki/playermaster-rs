
void __fastcall FUN_00409f20(CColorBaseDlg *param_1)

{
  uint uVar1;
  IDataManager *pIVar2;
  CModuleLanguageTrans *this;
  undefined4 uVar3;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446024;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_14 + 0x10);
  ExceptionList = &local_10;
  CColorBaseDlg::SetLanguage(param_1);
  pIVar2 = CommonData_Get();
  if (pIVar2 != (IDataManager *)0x0) {
    this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar2 + 0x28))(uVar1);
    if (this != (CModuleLanguageTrans *)0x0) {
      uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)local_14,(wchar_t *)0x5);
      local_8 = 0;
      Ordinal_1518(uVar3);
      local_8 = 0xffffffff;
      Ordinal_1042();
      uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)local_14,(wchar_t *)0x5);
      local_8 = 1;
      Ordinal_1518(uVar3);
      local_8 = 0xffffffff;
      Ordinal_1042();
      uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)local_14,(wchar_t *)0x5);
      local_8 = 2;
      Ordinal_1518(uVar3);
      local_8 = 0xffffffff;
      Ordinal_1042();
      uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)local_18,(wchar_t *)0x5);
      local_8 = 3;
      Ordinal_1518(uVar3);
      Ordinal_1042();
    }
  }
  ExceptionList = local_10;
  return;
}

