
void FUN_0040b690(void)

{
  LANGID LVar1;
  IDataManager *pIVar2;
  CModuleLanguageTrans *this;
  
  pIVar2 = CommonData_Get();
  if ((pIVar2 != (IDataManager *)0x0) &&
     (this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar2 + 0x28))(),
     this != (CModuleLanguageTrans *)0x0)) {
    LVar1 = GetUserDefaultLangID();
    if (LVar1 != 0x804) {
      CModuleLanguageTrans::SetLanguageID(this,3);
      return;
    }
    CModuleLanguageTrans::SetLanguageID(this,1);
  }
  return;
}

