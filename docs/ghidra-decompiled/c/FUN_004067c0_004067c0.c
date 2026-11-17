
void FUN_004067c0(void)

{
  code *pcVar1;
  IDataManager *pIVar2;
  HRESULT HVar3;
  BOOL BVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  LPCOLESTR unaff_EBX;
  code *pcVar10;
  LPCWSTR pWVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  LPCOLESTR pOStack_48;
  CRegister aCStack_44 [4];
  LPCOLESTR pOStack_40;
  wchar_t *local_3c;
  undefined1 auStack_38 [8];
  CLSID CStack_30;
  uint local_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00445ca8;
  local_14 = ExceptionList;
  local_1c = DAT_0046400c ^ (uint)&uStack_4c;
  uStack_5c = DAT_0046400c ^ (uint)(aCStack_44 + -0x14);
  ExceptionList = &local_14;
  uStack_60 = L"\xf88bﾅ萏ڶ";
  pIVar2 = CommonData_Get();
  if (pIVar2 == (IDataManager *)0x0) goto LAB_00406ebd;
  uStack_60 = L"\x2068䓗贀⑌윤⑄T";
  Ordinal_296();
  uStack_60 = L"Word.Application";
  uStack_c = 0;
  Ordinal_1520();
  HVar3 = CLSIDFromProgID(pOStack_40,&CStack_30);
  pcVar1 = ~CRegister_exref;
  if (HVar3 == 0) {
    FUN_00406fe0(&pOStack_48,&CStack_30.Data1);
    puStack_10._0_1_ = 1;
    piVar6 = (int *)FUN_00406f40(auStack_38 + 4,L"CLSID\\{",(int *)&pOStack_48);
    puStack_10._0_1_ = 2;
    FUN_00405ae0(&local_3c,piVar6,L"}\\LocalServer32");
    puStack_10._0_1_ = 4;
    Ordinal_1042();
    CRegister::CRegister(aCStack_44);
    puStack_10._0_1_ = 5;
    lVar7 = CRegister::OpenKey(aCStack_44,(HKEY__ *)0x80000000,local_3c,0,1);
    pcVar10 = ~CRegister_exref;
    if (lVar7 == 0) {
      Ordinal_296();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
      CRegister::GetStringValue
                (aCStack_44,L"",
                 (CStringT<wchar_t,StrTraitMFC_DLL<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 &uStack_4c);
      pWVar11 = L"\"";
      Ordinal_12634();
      iVar5 = Ordinal_4621(L".EXE",0);
      uVar8 = Ordinal_8242(&pOStack_48,iVar5 + 4);
      CStack_30.Data4[0] = '\a';
      Ordinal_1518(uVar8);
      CStack_30.Data2._0_1_ = '\x06';
      Ordinal_1042();
      pwVar9 = wcsstr(pWVar11,L"WORD.EXE");
      if (pwVar9 == (wchar_t *)0x0) {
LAB_004069b1:
        BVar4 = 0;
      }
      else {
        BVar4 = PathFileExistsW(pWVar11);
        if (BVar4 == 0) goto LAB_004069b1;
        BVar4 = 1;
      }
      CRegister::CloseKey((CRegister *)&uStack_60);
      Ordinal_1042();
      CStack_30.Data2._0_1_ = '\x04';
      CRegister::~CRegister((CRegister *)&uStack_60);
      Ordinal_1042();
      Ordinal_1042();
      goto LAB_004069e6;
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
    CRegister::~CRegister(aCStack_44);
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
LAB_004069f4:
    Ordinal_296();
    puStack_10 = (undefined1 *)0x8;
    Ordinal_1520();
    HVar3 = CLSIDFromProgID(uStack_4c,(LPCLSID)(auStack_38 + 4));
    local_14 = (void *)0xffffffff;
    Ordinal_1042();
    if (HVar3 != 0) {
      iVar5 = (**(code **)(*(int *)pIVar2 + 0x2c))();
      *(undefined4 *)(iVar5 + 0x60) = 0;
    }
  }
  else {
    BVar4 = FUN_00406ee0(L"winword.exe");
LAB_004069e6:
    Ordinal_1042();
    pcVar10 = pcVar1;
    if (BVar4 == 0) goto LAB_004069f4;
  }
  Ordinal_296();
  puStack_10 = (undefined1 *)0x9;
  Ordinal_1520();
  HVar3 = CLSIDFromProgID(pOStack_48,(LPCLSID)(auStack_38 + 4));
  if (HVar3 == 0) {
    FUN_00406fe0(&pOStack_40,(undefined4 *)(auStack_38 + 4));
    local_14._0_1_ = 10;
    piVar6 = (int *)FUN_00406f40(&local_3c,L"CLSID\\{",(int *)&pOStack_40);
    local_14._0_1_ = 0xb;
    FUN_00405ae0(&uStack_4c,piVar6,L"}\\LocalServer32");
    local_14._0_1_ = 0xd;
    Ordinal_1042();
    CRegister::CRegister(aCStack_44);
    local_14._0_1_ = 0xe;
    lVar7 = CRegister::OpenKey(aCStack_44,(HKEY__ *)0x80000000,uStack_4c,0,1);
    if (lVar7 == 0) {
      Ordinal_296();
      local_14 = (void *)CONCAT31(local_14._1_3_,0xf);
      CRegister::GetStringValue
                (aCStack_44,L"",
                 (CStringT<wchar_t,StrTraitMFC_DLL<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (aCStack_44 + -0xc));
      pWVar11 = L"\"";
      Ordinal_12634(&DAT_0044d630,&DAT_0044d16c);
      iVar5 = Ordinal_4621(L".EXE",0);
      uVar8 = Ordinal_8242(&pOStack_48,iVar5 + 4);
      CStack_30.Data2._0_1_ = '\x10';
      Ordinal_1518(uVar8);
      CStack_30.Data1._0_1_ = '\x0f';
      Ordinal_1042();
      pwVar9 = wcsstr(pWVar11,L"EXCEL.EXE");
      if (pwVar9 == (wchar_t *)0x0) {
LAB_00406be7:
        BVar4 = 0;
      }
      else {
        BVar4 = PathFileExistsW(pWVar11);
        if (BVar4 == 0) goto LAB_00406be7;
        BVar4 = 1;
      }
      CRegister::CloseKey((CRegister *)&uStack_60);
      Ordinal_1042();
      CStack_30.Data1._0_1_ = '\r';
      (*pcVar10)();
      Ordinal_1042();
      Ordinal_1042();
      goto LAB_00406c1c;
    }
    local_14 = (void *)CONCAT31(local_14._1_3_,0xd);
    (*pcVar10)();
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
LAB_00406c2a:
    Ordinal_296();
    local_14 = (void *)0x11;
    Ordinal_1520(L"KET.Application");
    HVar3 = CLSIDFromProgID(unaff_EBX,(LPCLSID)auStack_38);
    uStack_18 = 0xffffffff;
    Ordinal_1042();
    if (HVar3 != 0) {
      iVar5 = (**(code **)(*(int *)pIVar2 + 0x2c))();
      *(undefined4 *)(iVar5 + 0x60) = 0;
    }
  }
  else {
    BVar4 = FUN_00406ee0(L"excel.exe");
LAB_00406c1c:
    Ordinal_1042();
    if (BVar4 == 0) goto LAB_00406c2a;
  }
  Ordinal_296();
  local_14 = (void *)0x12;
  Ordinal_1520(L"PowerPoint.Application");
  HVar3 = CLSIDFromProgID(uStack_4c,(LPCLSID)auStack_38);
  if (HVar3 == 0) {
    FUN_00406fe0(aCStack_44,(undefined4 *)auStack_38);
    uStack_18._0_1_ = 0x13;
    piVar6 = (int *)FUN_00406f40(&pOStack_40,L"CLSID\\{",(int *)aCStack_44);
    uStack_18._0_1_ = 0x14;
    FUN_00405ae0(aCStack_44 + -0xc,piVar6,L"}\\LocalServer32");
    uStack_18._0_1_ = 0x16;
    Ordinal_1042();
    CRegister::CRegister((CRegister *)&pOStack_48);
    uStack_18._0_1_ = 0x17;
    lVar7 = CRegister::OpenKey((CRegister *)&pOStack_48,(HKEY__ *)0x80000000,unaff_EBX,0,1);
    if (lVar7 == 0) {
      Ordinal_296();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x18);
      CRegister::GetStringValue
                ((CRegister *)&pOStack_48,L"",
                 (CStringT<wchar_t,StrTraitMFC_DLL<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                 (aCStack_44 + -0x10));
      pWVar11 = L"\"";
      Ordinal_12634(&DAT_0044d630,&DAT_0044d16c);
      iVar5 = Ordinal_4621(L".EXE",0);
      uVar8 = Ordinal_8242(&uStack_4c,iVar5 + 4);
      CStack_30.Data1._0_1_ = '\x19';
      Ordinal_1518(uVar8);
      auStack_38[4] = 0x18;
      Ordinal_1042();
      pwVar9 = wcsstr(pWVar11,L"POWERPNT.EXE");
      if (pwVar9 == (wchar_t *)0x0) {
LAB_00406e1d:
        BVar4 = 0;
      }
      else {
        BVar4 = PathFileExistsW(pWVar11);
        if (BVar4 == 0) goto LAB_00406e1d;
        BVar4 = 1;
      }
      CRegister::CloseKey(aCStack_44 + -0x20);
      Ordinal_1042();
      auStack_38[4] = 0x16;
      (*pcVar10)();
      Ordinal_1042();
      Ordinal_1042();
      goto LAB_00406e52;
    }
    uStack_18 = CONCAT31(uStack_18._1_3_,0x16);
    (*pcVar10)();
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
  }
  else {
    BVar4 = FUN_00406ee0(L"powerpnt.exe");
LAB_00406e52:
    uStack_18 = 0xffffffff;
    Ordinal_1042();
    if (BVar4 != 0) goto LAB_00406ebd;
  }
  uStack_60 = L"䑨䓗贀⑌윜⑄ᩔ";
  Ordinal_296();
  uStack_60 = L"KWPP.Application";
  uStack_c = 0x1a;
  Ordinal_1520();
  HVar3 = CLSIDFromProgID(pOStack_48,&CStack_30);
  puStack_10 = (undefined1 *)0xffffffff;
  Ordinal_1042();
  if (HVar3 != 0) {
    uStack_60 = L"炉譠⑌摈ඉ";
    iVar5 = (**(code **)(*(int *)pIVar2 + 0x2c))();
    *(undefined4 *)(iVar5 + 0x60) = 0;
  }
LAB_00406ebd:
  ExceptionList = local_14;
  FUN_0041d025(local_1c ^ (uint)&uStack_4c);
  return;
}

