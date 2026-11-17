
uint FUN_0041c880(uint param_1)

{
  IDataManager *pIVar1;
  CModuleLanguageTrans *this;
  
  pIVar1 = CommonData_Get();
  this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar1 + 0x28))();
  if (this == (CModuleLanguageTrans *)0x0) {
    Ordinal_286(L"not found");
    return param_1;
  }
  CModuleLanguageTrans::TranslateString(this,param_1,(wchar_t *)0x5);
  return param_1;
}

