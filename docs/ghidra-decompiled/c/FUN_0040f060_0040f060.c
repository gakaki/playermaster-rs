
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040f060(int param_1)

{
  HWND__ *pHVar1;
  int iVar2;
  uint uVar3;
  IDataManager *pIVar4;
  undefined4 uStack_2a0;
  undefined1 auStack_27a [58];
  undefined1 local_22c [24];
  CCusPopMenu local_214 [12];
  tagPOINT local_208;
  CModuleLanguageTrans *local_200;
  CColorBaseDlg local_1fc [488];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446873;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_1fc + 0x1f8);
  ExceptionList = &local_10;
  if (param_1 == 0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = *(HWND__ **)(param_1 + 0x20);
  }
  CCusPopMenu::CCusPopMenu(local_214,pHVar1);
  local_8 = 0;
  iVar2 = CCusPopMenu::CreatePopMenu(local_214,1);
  if (iVar2 != 0) {
    CCusPopMenu::SetCustomMenuColor(local_214);
    iVar2 = 0;
    local_200 = (CModuleLanguageTrans *)GetDpi();
    uVar3 = (uint)((float)local_200 * _DAT_0044fee8);
    local_200 = (CModuleLanguageTrans *)GetDpi();
    CCusPopMenu::SetMenuSize(local_214,0,0,(int)((float)local_200 * _DAT_0044ff20),uVar3,iVar2);
    Ordinal_971();
    local_8 = CONCAT31(local_8._1_3_,1);
    pIVar4 = CommonData_Get();
    local_200 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar4 + 0x28))();
    if (local_200 != (CModuleLanguageTrans *)0x0) {
      CModuleLanguageTrans::TranslateString(local_200,(uint)(auStack_27a + -6),(wchar_t *)0x5);
      CCusPopMenu::AppendStringMenu(local_214);
      uStack_2a0 = 0x40f1cc;
      CModuleLanguageTrans::TranslateString(local_200,(uint)(auStack_27a + -0x16),(wchar_t *)0x5);
      uStack_2a0 = 0x40f1e2;
      CCusPopMenu::AppendStringMenu(local_214);
      CModuleLanguageTrans::TranslateString(local_200,(uint)&uStack_2a0,(wchar_t *)0x5);
      CCusPopMenu::AppendStringMenu(local_214,local_22c,0,0x3ea);
    }
    local_208.x = 0;
    local_208.y = 0;
    GetCursorPos(&local_208);
    if (((*(int *)(param_1 + 0x9c) != 0) &&
        (iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98), iVar2 != 0)) && (iVar2 != -0x340)) {
      local_208.x = *(LONG *)(iVar2 + 0x34c);
      local_208.y = *(int *)(iVar2 + 0x358);
      ClientToScreen(*(HWND *)(param_1 + 0x20),&local_208);
      local_208.y = local_208.y - *(int *)(*(int *)(param_1 + 0x9c) + 4);
    }
    iVar2 = Ordinal_14237();
    *(undefined4 *)(param_1 + 0xf4) = 0;
    if (iVar2 == 1000) {
      FUN_00410b60(local_1fc);
      local_8._0_1_ = 2;
      Ordinal_4049();
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00410d20(local_1fc);
    }
    else if (iVar2 == 0x3e9) {
      if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x94))();
      }
    }
    else if (iVar2 == 0x3ea) {
      FUN_0040f950(param_1);
    }
    Ordinal_13824();
    CCusPopMenu::RemovePopMenu(local_214);
    local_8 = local_8 & 0xffffff00;
    Ordinal_1445();
  }
  local_8 = 0xffffffff;
  CCusPopMenu::~CCusPopMenu(local_214);
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_1fc + 0x1f8));
  return;
}

