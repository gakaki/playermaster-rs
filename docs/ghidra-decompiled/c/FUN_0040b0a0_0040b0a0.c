
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040b0a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  IDataManager *pIVar3;
  CModuleLanguageTrans *this;
  CConfigSaveAndLoad *this_00;
  ICustomControl *pIVar4;
  undefined4 *puVar5;
  undefined1 auStackY_478 [128];
  undefined4 uVar6;
  undefined1 auStack_3b2 [2];
  undefined **local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_380;
  undefined4 local_378;
  int local_2bc;
  undefined1 *local_2b8;
  undefined1 *local_2b4;
  undefined1 *local_2ac;
  undefined4 *local_2a8;
  undefined1 *local_2a4;
  undefined1 *local_2a0;
  INITCOMMONCONTROLSEX local_29c;
  undefined **local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined1 *local_288;
  CModuleLanguageTrans *local_284;
  CColorBaseDlg local_280 [152];
  undefined4 local_1e8 [117];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004463ab;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_1e8 + 0x79);
  ExceptionList = &local_10;
  local_29c.dwSize = 8;
  local_29c.dwICC = 0xff;
  InitCommonControlsEx(&local_29c);
  Ordinal_7881();
  FUN_00405ee0((undefined4 *)(param_1 + 0x14c));
  cef_enable_highdpi_support();
  iVar1 = Ordinal_2204();
  local_290 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x44);
  local_28c = 0;
  local_294 = CefMainArgs::vftable;
  local_8 = 0;
  puVar2 = (undefined4 *)Ordinal_1506();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0040ab30(puVar2);
  }
  local_2a8 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar2[1] + 4) + 4 + (int)puVar2))();
  }
  local_8._0_1_ = 1;
  uVar6 = 0;
  puVar5 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar2[1] + 4) + 4 + (int)puVar2))();
  }
  FUN_0041e340((int)&local_294,(int)puVar5,uVar6);
  local_3a4 = CefStructBase<CefSettingsTraits>::vftable;
  memset(&local_3a0,0,0xe4);
  local_2bc = 0;
  local_3a0 = 0xe4;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_39c = 1;
  local_378 = 1;
  local_380 = 1;
  uVar6 = 0;
  puVar5 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar2[1] + 4) + 4 + (int)puVar2))();
  }
  FUN_0041e420((int)&local_294,(int)&local_3a4,(int)puVar5,uVar6);
  Ordinal_2265();
  if (*(int *)(param_1 + 0x148) == 0) {
    GdiplusStartup();
  }
  Ordinal_2163();
  local_284 = (CModuleLanguageTrans *)0x60;
  CAppChecking::ReadRegEditPDI((uint *)&local_284);
  if (local_284 < (CModuleLanguageTrans *)0x60) {
    local_284 = (CModuleLanguageTrans *)0x60;
  }
  SetDpi((float)((double)(int)local_284 + (double)(&DAT_0044ffa0)[-((int)local_284 >> 0x1f)]) /
         _DAT_0044ff1c);
  iVar1 = Ordinal_2204();
  CWndShadow::Initialize(*(HINSTANCE__ **)(iVar1 + 8));
  Ordinal_13771();
  CoInitialize((LPVOID)0x0);
  Ordinal_2204();
  Ordinal_286();
  iVar1 = CAppChecking::CheckMultiApp((CAppChecking *)(param_1 + 0x118));
  SetUnhandledExceptionFilter(FUN_0040a760);
  FUN_0040a6e0();
  CommonData_Init();
  Ordinal_286();
  ColorLightControl_Init();
  if (iVar1 == 0) {
    pIVar3 = CommonData_Get();
    if ((pIVar3 != (IDataManager *)0x0) &&
       (this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x28))(), local_284 = this,
       this != (CModuleLanguageTrans *)0x0)) {
      this_00 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar3 + 0x34))();
      if (this_00 != (CConfigSaveAndLoad *)0x0) {
        CConfigSaveAndLoad::LoadConfigFile(this_00);
      }
      iVar1 = (**(code **)(*(int *)pIVar3 + 0x2c))();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        FUN_0040b690();
      }
      pIVar4 = ColorLightControl_GetInterface();
      local_288 = auStack_3b2 + -0x12;
      CModuleLanguageTrans::TranslateString(this,(uint)(auStack_3b2 + -0x12),(wchar_t *)0x5);
      local_2a4 = auStack_3b2 + -0x16;
      local_8._0_1_ = 3;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStack_3b2 + -0x16),(wchar_t *)0x5);
      local_2ac = auStack_3b2 + -0x1a;
      local_8._0_1_ = 4;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStack_3b2 + -0x1a),(wchar_t *)0x5);
      local_2b4 = auStack_3b2 + -0x1e;
      local_8._0_1_ = 5;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStack_3b2 + -0x1e),(wchar_t *)0x5);
      local_2a0 = auStack_3b2 + -0x22;
      local_8._0_1_ = 6;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStack_3b2 + -0x22),(wchar_t *)0x5);
      local_2b8 = auStackY_478 + 0xa0;
      local_8._0_1_ = 7;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStackY_478 + 0xa0),(wchar_t *)0x5);
      local_8._0_1_ = 8;
      CModuleLanguageTrans::TranslateString(local_284,(uint)(auStackY_478 + 0x9c),(wchar_t *)0x5);
      local_8._0_1_ = 2;
      (**(code **)(*(int *)pIVar4 + 0x28))();
      puVar5 = (undefined4 *)
               CModuleLanguageTrans::TranslateString(local_284,(uint)&local_288,(wchar_t *)0x5);
      local_8 = CONCAT31(local_8._1_3_,9);
      iVar1 = Ordinal_2204();
      MsgBox((CWnd *)0x0,(wchar_t *)*puVar5,*(wchar_t **)(*(int *)(iVar1 + 4) + 0x50),0,0,5,1);
      Ordinal_1042();
    }
  }
  else {
    FUN_0041cd52();
    iVar1 = SDL_Init();
    if (iVar1 != 0) {
      Ordinal_2262();
    }
    local_288 = (undefined1 *)0x1;
    pIVar3 = CommonData_Get();
    if (pIVar3 != (IDataManager *)0x0) {
      local_284 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x34))();
      if (local_284 != (CModuleLanguageTrans *)0x0) {
        CConfigSaveAndLoad::LoadConfigFile((CConfigSaveAndLoad *)local_284);
        CConfigSaveAndLoad::LoadLanEncryptionFile((CConfigSaveAndLoad *)local_284);
        CConfigSaveAndLoad::LoadCltGifFile((CConfigSaveAndLoad *)local_284);
      }
      iVar1 = (**(code **)(*(int *)pIVar3 + 0x2c))();
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
        FUN_0040b690();
        FUN_00409900(local_280);
        local_8._0_1_ = 10;
        local_288 = (undefined1 *)Ordinal_4049();
        if (local_288 == (undefined1 *)0x1) {
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00409ac0(local_280);
      }
    }
    Ordinal_2230();
    if (local_288 == (undefined1 *)0x1) {
      FUN_0040c910(local_1e8);
      local_8._0_1_ = 0xb;
      *(undefined4 **)(param_1 + 0x20) = local_1e8;
      Ordinal_4049();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0040cc80(local_1e8);
    }
  }
  local_3a4 = CefStructBase<CefSettingsTraits>::vftable;
  if (local_2bc == 0) {
    FUN_0040a9e0((int)&local_3a0);
  }
  local_8 = local_8 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)(*(int *)(*(int *)(puVar2[1] + 4) + 4 + (int)puVar2) + 4))();
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_1e8 + 0x79));
  return;
}

