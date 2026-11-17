
void __thiscall FUN_0040f400(void *this,undefined **param_1)

{
  uint uVar1;
  IDataManager *pIVar2;
  CPlayerBoxCommonData *this_00;
  CCacheManager *this_01;
  CModuleLanguageTrans *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  CWnd *pCVar6;
  __uint64 _Var7;
  wchar_t *pwVar8;
  undefined ***pppuVar9;
  int iVar10;
  void **ppvVar11;
  wchar_t *pwVar12;
  int iVar13;
  int iVar14;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004468ba;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = this;
  if (param_1 == (undefined **)0xfa0) {
    KillTimer(*(HWND *)((int)this + 0x20),4000);
    pIVar2 = CommonData_Get();
    if (pIVar2 != (IDataManager *)0x0) {
      this_00 = (CPlayerBoxCommonData *)(**(code **)(*(int *)pIVar2 + 0x10))();
      CPlayerBoxCommonData::CheckCanUseFont(this_00);
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_1 == (undefined **)0xfa1) {
      KillTimer(*(HWND *)((int)this + 0x20),0xfa1);
      param_1 = CEnviCheck::vftable;
      local_8 = 0;
      FUN_004067c0();
      ExceptionList = local_10;
      return;
    }
    if (param_1 == (undefined **)0xfa2) {
      KillTimer(*(HWND *)((int)this + 0x20),0xfa2);
      pIVar2 = CommonData_Get();
      if ((pIVar2 != (IDataManager *)0x0) &&
         (this_01 = (CCacheManager *)(**(code **)(*(int *)pIVar2 + 0x50))(),
         this_01 != (CCacheManager *)0x0)) {
        _Var7 = CCacheManager::GetRestSize(this_01);
        if (((int)(_Var7 >> 0x20) == 0) && ((uint)_Var7 < 0x6400000)) {
          pwVar12 = (wchar_t *)0x5;
          pppuVar9 = &param_1;
          pCVar3 = (CModuleLanguageTrans *)
                   (**(code **)(*(int *)pIVar2 + 0x28))(pppuVar9,5,L"IDS_NoDiskSpace");
          puVar4 = (undefined4 *)
                   CModuleLanguageTrans::TranslateString(pCVar3,(uint)pppuVar9,pwVar12);
          local_8 = 1;
          iVar5 = Ordinal_2204();
          iVar14 = 1;
          iVar13 = 5;
          iVar10 = 0;
          uVar1 = 0x40;
          pwVar12 = *(wchar_t **)(*(int *)(iVar5 + 4) + 0x50);
          pwVar8 = (wchar_t *)*puVar4;
          pCVar6 = (CWnd *)FUN_004103a0();
          MsgBox(pCVar6,pwVar8,pwVar12,uVar1,iVar10,iVar13,iVar14);
          Ordinal_1042();
          ExceptionList = local_10;
          return;
        }
        CCacheManager::StartCheckCache(this_01);
        ExceptionList = local_10;
        return;
      }
    }
    else if (param_1 == (undefined **)0xfa3) {
      KillTimer(*(HWND *)((int)this + 0x20),0xfa3);
      pIVar2 = CommonData_Get();
      if ((pIVar2 != (IDataManager *)0x0) &&
         (iVar5 = (**(code **)(*(int *)pIVar2 + 0x2c))(uVar1), *(int *)(iVar5 + 0xdc) != 0)) {
        pwVar12 = (wchar_t *)0x2;
        ppvVar11 = &local_14;
        pCVar3 = (CModuleLanguageTrans *)
                 (**(code **)(*(int *)pIVar2 + 0x28))(ppvVar11,2,L"IDS_Settings_CacheDuration_Tip");
        puVar4 = (undefined4 *)CModuleLanguageTrans::TranslateString(pCVar3,(uint)ppvVar11,pwVar12);
        local_8 = 2;
        iVar5 = Ordinal_2204();
        iVar14 = 1;
        iVar13 = 5;
        iVar10 = 0;
        uVar1 = 0x40;
        pwVar12 = *(wchar_t **)(*(int *)(iVar5 + 4) + 0x50);
        pwVar8 = (wchar_t *)*puVar4;
        pCVar6 = (CWnd *)FUN_004103a0();
        MsgBox(pCVar6,pwVar8,pwVar12,uVar1,iVar10,iVar13,iVar14);
        Ordinal_1042();
        ExceptionList = local_10;
        return;
      }
    }
    else if ((param_1 == (undefined **)0xfa4) && (iVar5 = FUN_0040ef30(), iVar5 != 0)) {
      *(undefined4 *)((int)this + 0x1cc) = 1;
      KillTimer(*(HWND *)((int)this + 0x20),0xfa4);
    }
  }
  ExceptionList = local_10;
  return;
}

