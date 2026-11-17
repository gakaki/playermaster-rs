
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004057f0(CColorBaseDlg *param_1)

{
  int iVar1;
  uint uVar2;
  IDataManager *pIVar3;
  CModuleLanguageTrans *this;
  undefined4 uVar4;
  undefined4 *puVar5;
  ICustomControl *pIVar6;
  undefined1 local_18 [4];
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445a26;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (uint)(local_18 + 0x14);
  ExceptionList = &local_10;
  CColorBaseDlg::SetLanguage(param_1);
  pIVar3 = CommonData_Get();
  this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x28))(uVar2);
  if (this != (CModuleLanguageTrans *)0x0) {
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)&local_14,(wchar_t *)0x5);
    local_8 = 0;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)&local_14,(wchar_t *)0x5);
    local_8 = 1;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)&local_14,(wchar_t *)0x5);
    local_8 = 2;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)&local_14,(wchar_t *)0x5);
    local_8 = 3;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)&local_14,(wchar_t *)0x5);
    local_8 = 4;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
    uVar4 = CModuleLanguageTrans::TranslateString(this,(uint)local_18,(wchar_t *)0x5);
    local_8 = 5;
    Ordinal_1518(uVar4);
    local_8 = 0xffffffff;
    Ordinal_1042();
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    Ordinal_3839();
    if (*(int **)(param_1 + 0x1e4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1e4) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  puVar5 = (undefined4 *)Ordinal_1506(8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *puVar5 = CFont::vftable;
  }
  *(undefined4 **)(param_1 + 0x1e4) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    pIVar6 = ColorLightControl_GetInterface();
    if (pIVar6 != (ICustomControl *)0x0) {
      pIVar6 = ColorLightControl_GetInterface();
      uVar4 = 400;
      iVar1 = *(int *)pIVar6;
      local_14 = GetDpi();
      (**(code **)(iVar1 + 0x34))
                (*(undefined4 *)(param_1 + 0x1e4),(int)(local_14 * _DAT_0044fee4),uVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

