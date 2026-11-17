
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040e660(int param_1)

{
  bool bVar1;
  HWND__ *pHVar2;
  int iVar3;
  uint uVar4;
  IDataManager *pIVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  CConfigSaveAndLoad *this;
  CModuleLanguageTrans *this_00;
  code *pcVar9;
  undefined4 uStack_2b0;
  undefined1 auStack_27a [58];
  undefined1 local_22c [20];
  CCusPopMenu local_218 [12];
  tagPOINT local_20c;
  CModuleLanguageTrans *local_204;
  float local_200;
  CColorBaseDlg local_1fc [488];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004467ef;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_1fc + 0x1f8);
  ExceptionList = &local_10;
  if (param_1 == 0) {
    pHVar2 = (HWND__ *)0x0;
  }
  else {
    pHVar2 = *(HWND__ **)(param_1 + 0x20);
  }
  CCusPopMenu::CCusPopMenu(local_218,pHVar2);
  local_8 = 0;
  iVar3 = CCusPopMenu::CreatePopMenu(local_218,0);
  if (iVar3 == 0) goto LAB_0040ec2c;
  CCusPopMenu::SetCustomMenuColor(local_218);
  iVar3 = 0;
  local_200 = GetDpi();
  uVar4 = (uint)(local_200 * _DAT_0044fee8);
  local_200 = GetDpi();
  CCusPopMenu::SetMenuSize(local_218,1,0,(int)(local_200 * _DAT_0044ff2c),uVar4,iVar3);
  Ordinal_971();
  pcVar9 = CommonData_Get_exref;
  local_8 = CONCAT31(local_8._1_3_,1);
  pIVar5 = CommonData_Get();
  local_204 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar5 + 0x28))();
  if (local_204 != (CModuleLanguageTrans *)0x0) {
    CModuleLanguageTrans::TranslateString(local_204,(uint)(auStack_27a + -6),(wchar_t *)0x5);
    CCusPopMenu::AppendStringMenu(local_218);
    CModuleLanguageTrans::TranslateString(local_204,(uint)(auStack_27a + -0x16),(wchar_t *)0x5);
    CCusPopMenu::AppendStringMenu(local_218);
    uStack_2b0 = 0x40e7f7;
    CModuleLanguageTrans::TranslateString(local_204,(uint)(auStack_27a + -0x26),(wchar_t *)0x5);
    uStack_2b0 = 0x40e80d;
    CCusPopMenu::AppendStringMenu(local_218);
    CModuleLanguageTrans::TranslateString(local_204,(uint)&uStack_2b0,(wchar_t *)0x5);
    CCusPopMenu::AppendStringMenu(local_218,local_22c,0,3000);
    pcVar9 = CommonData_Get_exref;
  }
  local_20c.x = 0;
  local_20c.y = 0;
  GetCursorPos(&local_20c);
  if (((*(int *)(param_1 + 0x9c) != 0) &&
      (iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98), iVar3 != 0)) && (iVar3 != -0x2d8)) {
    local_20c.x = *(LONG *)(iVar3 + 0x2e4);
    local_20c.y = *(int *)(iVar3 + 0x2f0);
    ClientToScreen(*(HWND *)(param_1 + 0x20),&local_20c);
    local_20c.y = local_20c.y - *(int *)(*(int *)(param_1 + 0x9c) + 4);
  }
  iVar3 = Ordinal_14237();
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (iVar3 < 0x7d3) {
    if (iVar3 == 0x7d2) {
      piVar6 = (int *)(*pcVar9)();
      this_00 = (CModuleLanguageTrans *)(**(code **)(*piVar6 + 0x28))();
      if (this_00 != (CModuleLanguageTrans *)0x0) {
        uVar4 = 4;
        goto LAB_0040eac8;
      }
    }
    else if (iVar3 < 0x5de) {
      if (iVar3 == 0x5dd) {
        if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
          (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x88))();
        }
      }
      else if (iVar3 == 1000) {
        FUN_00410840(1);
        iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
        if (iVar3 != 0) {
          *(undefined4 *)(iVar3 + 0x360) = 0;
          FUN_0040d3f0(param_1);
        }
      }
      else if (iVar3 == 0x3e9) {
        local_204 = (CModuleLanguageTrans *)0x0;
        bVar1 = false;
        piVar6 = (int *)(*pcVar9)();
        iVar3 = (**(code **)(*piVar6 + 0x30))();
        if (*(int *)(iVar3 + 0x20) == 0) {
          if (DAT_00464e48 != 0) {
            FUN_0040dbc0(0);
          }
          FUN_00409260(*(void **)(param_1 + 0x9c),3);
          local_204 = (CModuleLanguageTrans *)FUN_004091c0(3,2);
          iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
          if (iVar3 == 0) {
            bVar1 = false;
          }
          else {
            *(undefined4 *)(iVar3 + 0x360) = 0;
            bVar1 = true;
          }
        }
        FUN_00410840(0);
        piVar6 = (int *)(*pcVar9)();
        iVar3 = (**(code **)(*piVar6 + 0x30))();
        if (*(int *)(iVar3 + 0x20) == 0) {
          if ((bVar1) || (local_204 != (CModuleLanguageTrans *)0x0)) {
            FUN_0040d3f0(param_1);
          }
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0x360) = 1;
            FUN_0040d3f0(param_1);
          }
        }
      }
      else if (iVar3 == 0x5dc) {
        piVar6 = (int *)(*pcVar9)();
        piVar7 = (int *)(*pcVar9)();
        iVar3 = (**(code **)(*piVar6 + 0x2c))();
        iVar3 = *(int *)(iVar3 + 0xc);
        iVar8 = (**(code **)(*piVar7 + 0x2c))();
        *(uint *)(iVar8 + 0xc) = (uint)(iVar3 == 0);
        pIVar5 = CommonData_Get();
        this = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar5 + 0x34))();
        if (this != (CConfigSaveAndLoad *)0x0) {
          CConfigSaveAndLoad::SaveConfigFile(this);
        }
      }
    }
    else if (iVar3 == 2000) {
      piVar6 = (int *)(*pcVar9)();
      this_00 = (CModuleLanguageTrans *)(**(code **)(*piVar6 + 0x28))();
      if (this_00 != (CModuleLanguageTrans *)0x0) {
        uVar4 = 1;
LAB_0040eac8:
        iVar3 = CModuleLanguageTrans::SetLanguageID(this_00,uVar4);
        if (iVar3 != 0) {
          FUN_0040eeb0(param_1);
        }
      }
    }
    else if (iVar3 == 0x7d1) {
      piVar6 = (int *)(*pcVar9)();
      this_00 = (CModuleLanguageTrans *)(**(code **)(*piVar6 + 0x28))();
      if (this_00 != (CModuleLanguageTrans *)0x0) {
        uVar4 = 3;
        goto LAB_0040eac8;
      }
    }
  }
  else {
    switch(iVar3) {
    case 3000:
      FUN_00405070(local_1fc);
      local_8._0_1_ = 3;
      Ordinal_4049();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00405230(local_1fc);
      break;
    case 0xbea:
      FUN_0040ed80();
      break;
    case 0xc1c:
      if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x84))();
      }
      break;
    case 0xc4e:
      if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 0xc) != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x70))();
      }
      break;
    case 0xc80:
      if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x74))();
      }
      break;
    case 0xcb2:
      FUN_00406550();
      local_8._0_1_ = 2;
      FUN_00405ae0(&local_204,(int *)&local_200,L"LEDSetting\\x64\\bin\\ledsetting.exe");
      ShellExecuteW((HWND)0x0,L"open",(LPCWSTR)local_204,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
      SetTimer(*(HWND *)(param_1 + 0x20),0xfa4,500,(TIMERPROC)0x0);
      Ordinal_1042();
      local_8 = CONCAT31(local_8._1_3_,1);
      Ordinal_1042();
    }
  }
  Ordinal_13824();
  CCusPopMenu::RemovePopMenu(local_218);
  local_8 = local_8 & 0xffffff00;
  Ordinal_1445();
LAB_0040ec2c:
  local_8 = 0xffffffff;
  CCusPopMenu::~CCusPopMenu(local_218);
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_1fc + 0x1f8));
  return;
}

