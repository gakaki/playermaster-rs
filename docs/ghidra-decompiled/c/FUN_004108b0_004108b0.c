
void FUN_004108b0(void)

{
  int iVar1;
  IDataManager *pIVar2;
  CModuleLanguageTrans *this;
  ICustomControl *pIVar3;
  undefined1 auStackY_108 [128];
  LANGID LangId;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004469b5;
  local_10 = ExceptionList;
  uStack_40 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  uStack_44 = 0x4108de;
  pIVar2 = CommonData_Get();
  uStack_44 = 0x4108e5;
  this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar2 + 0x28))();
  if (this != (CModuleLanguageTrans *)0x0) {
    uStack_44 = 0x4108fa;
    pIVar3 = ColorLightControl_GetInterface();
    uStack_48 = L"IDS_Abort";
    CModuleLanguageTrans::TranslateString(this,(uint)&uStack_44,(wchar_t *)0x5);
    local_8 = 0;
    CModuleLanguageTrans::TranslateString(this,(uint)&uStack_48,(wchar_t *)0x5);
    local_8._0_1_ = 1;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xbc),(wchar_t *)0x5);
    local_8._0_1_ = 2;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xb8),(wchar_t *)0x5);
    local_8._0_1_ = 3;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xb4),(wchar_t *)0x5);
    local_8._0_1_ = 4;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xb0),(wchar_t *)0x5);
    local_8 = CONCAT31(local_8._1_3_,5);
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xac),(wchar_t *)0x5);
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pIVar3 + 0x28))();
    pIVar3 = ColorLightControl_GetInterface();
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xa8),(wchar_t *)0x5);
    local_8 = 6;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xa4),(wchar_t *)0x5);
    local_8._0_1_ = 7;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0xa0),(wchar_t *)0x5);
    local_8._0_1_ = 8;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0x9c),(wchar_t *)0x5);
    local_8._0_1_ = 9;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0x98),(wchar_t *)0x5);
    local_8._0_1_ = 10;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0x94),(wchar_t *)0x5);
    local_8._0_1_ = 0xb;
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0x90),(wchar_t *)0x5);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    CModuleLanguageTrans::TranslateString(this,(uint)(auStackY_108 + 0x8c),(wchar_t *)0x5);
    local_8 = 0xffffffff;
    (**(code **)(*(int *)pIVar3 + 0x38))();
    iVar1 = *(int *)(this + 8);
    if (iVar1 == 1) {
      LangId = 0x804;
    }
    else if (iVar1 == 3) {
      LangId = 0x409;
    }
    else {
      if (iVar1 != 4) {
        ExceptionList = local_10;
        return;
      }
      LangId = 0x40c;
    }
    SetThreadUILanguage(LangId);
  }
  ExceptionList = local_10;
  return;
}

