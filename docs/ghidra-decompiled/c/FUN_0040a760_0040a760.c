
void FUN_0040a760(undefined4 param_1)

{
  uint uVar1;
  IDataManager *pIVar2;
  CConfigInfo *this;
  BOOL BVar3;
  wchar_t *pwVar4;
  HANDLE hObject;
  DWORD DVar5;
  HANDLE pvVar6;
  HANDLE pvVar7;
  undefined4 uVar8;
  DWORD *pDVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_460 [2];
  undefined1 auStack_45e [2];
  LPCWSTR pWStack_45c;
  LPCWSTR pWStack_458;
  undefined4 local_454;
  undefined4 uStack_450;
  DWORD DStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  _SYSTEMTIME _Stack_440;
  WCHAR WStack_430;
  undefined1 auStack_42e [518];
  wchar_t awStack_228 [262];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_004461e4;
  local_14 = ExceptionList;
  local_1c = DAT_0046400c ^ (uint)auStack_460;
  uVar1 = DAT_0046400c ^ (uint)(auStack_460 + -8);
  ExceptionList = &local_14;
  pIVar2 = CommonData_Get();
  if (pIVar2 != (IDataManager *)0x0) {
    this = (CConfigInfo *)(**(code **)(*(int *)pIVar2 + 0x2c))(&local_454,uVar1);
    CConfigInfo::GetPlayerMasterDumpDir(this);
    uStack_c = 0;
    GetLocalTime(&_Stack_440);
    swprintf_s(awStack_228,0x104,L"%s%04d-%02d-%02d\\",local_454,(uint)_Stack_440.wYear,
               (uint)_Stack_440.wMonth,(uint)_Stack_440.wDay);
    BVar3 = PathFileExistsW(awStack_228);
    if (BVar3 == 0) {
      CreateDirectoryW(awStack_228,(LPSECURITY_ATTRIBUTES)0x0);
    }
    WStack_430 = L'\0';
    memset(auStack_42e,0,0x206);
    GetModuleFileNameW((HMODULE)0x0,&WStack_430,0x104);
    pwVar4 = wcsrchr(&WStack_430,L'\\');
    if (pwVar4 == (wchar_t *)0x0) {
      wcsncpy_s(&WStack_430,0x104,L"Exception",0x104);
    }
    else {
      wcsncpy_s(&WStack_430,0x104,pwVar4 + 1,0x104);
      pwVar4[1] = L'\0';
    }
    Ordinal_296();
    uStack_c._0_1_ = 1;
    Ordinal_4772(&pWStack_45c,L"%s%s-%02d-%02d-%02d.dmp",awStack_228,&WStack_430,_Stack_440.wHour,
                 _Stack_440.wMinute,_Stack_440.wSecond);
    FUN_00405ae0(&pWStack_458,(int *)&pWStack_45c,L".txt");
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    hObject = CreateFileW(pWStack_45c,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (hObject != (HANDLE)0xffffffff) {
      uStack_448 = param_1;
      DStack_44c = GetCurrentThreadId();
      uVar11 = 0;
      uVar10 = 0;
      pDVar9 = &DStack_44c;
      uVar8 = 0;
      uStack_444 = 1;
      pvVar7 = hObject;
      DVar5 = GetCurrentProcessId();
      pvVar6 = GetCurrentProcess();
      MiniDumpWriteDump(pvVar6,DVar5,pvVar7,uVar8,pDVar9,uVar10,uVar11);
      CloseHandle(hObject);
    }
    FUN_0040a640(pWStack_458);
    FUN_0040a270(&uStack_450,(int *)&pWStack_45c,(int *)&pWStack_458);
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
  }
  ExceptionList = local_14;
  FUN_0041d025(local_1c ^ (uint)auStack_460);
  return;
}

