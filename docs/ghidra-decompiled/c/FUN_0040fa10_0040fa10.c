
undefined4 FUN_0040fa10(void)

{
  uint uVar1;
  IDataManager *pIVar2;
  CModuleLanguageTrans *this;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  CWnd *pCVar6;
  undefined1 *puVar7;
  wchar_t *pwVar8;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004468e9;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_14 + 0x10);
  ExceptionList = &local_10;
  pIVar2 = CommonData_Get();
  if (pIVar2 != (IDataManager *)0x0) {
    puVar7 = local_14;
    pwVar8 = (wchar_t *)0x5;
    this = (CModuleLanguageTrans *)
           (**(code **)(*(int *)pIVar2 + 0x28))(puVar7,5,L"IDS_NoDiskSpace",uVar1);
    puVar3 = (undefined4 *)CModuleLanguageTrans::TranslateString(this,(uint)puVar7,pwVar8);
    local_8 = 0;
    iVar4 = Ordinal_2204();
    pwVar8 = (wchar_t *)*puVar3;
    iVar4 = *(int *)(iVar4 + 4);
    piVar5 = (int *)Ordinal_2214();
    if (piVar5 == (int *)0x0) {
      pCVar6 = (CWnd *)0x0;
    }
    else {
      pCVar6 = (CWnd *)(**(code **)(*piVar5 + 0x7c))();
    }
    MsgBox(pCVar6,pwVar8,*(wchar_t **)(iVar4 + 0x50),0x40,0,5,1);
    Ordinal_1042();
  }
  ExceptionList = local_10;
  return 0;
}

