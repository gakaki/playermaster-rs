
void __thiscall FUN_004060f0(void *this,LPCWSTR param_1,UINT param_2)

{
  WCHAR WVar1;
  code *pcVar2;
  LPCWSTR pWVar3;
  int iVar4;
  int iVar5;
  DWORD DVar6;
  size_t cbMultiByte;
  bool bVar7;
  
  if (param_1 == (LPCWSTR)0x0) {
    *(undefined4 *)this = 0;
    return;
  }
  pWVar3 = param_1;
  do {
    WVar1 = *pWVar3;
    pWVar3 = pWVar3 + 1;
  } while (WVar1 != L'\0');
  iVar4 = ((int)pWVar3 - (int)(param_1 + 1) >> 1) + 1;
  FUN_004061c0(this,iVar4 * 4,(void *)((int)this + 4));
  iVar5 = WideCharToMultiByte(param_2,0,param_1,iVar4,*(LPSTR *)this,iVar4 * 4,(LPCSTR)0x0,
                              (LPBOOL)0x0);
  if (iVar5 == 0) {
    DVar6 = GetLastError();
    bVar7 = true;
    if (DVar6 == 0x7a) {
      cbMultiByte = WideCharToMultiByte(param_2,0,param_1,iVar4,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                       );
      FUN_004061c0(this,cbMultiByte,(void *)((int)this + 4));
      iVar4 = WideCharToMultiByte(param_2,0,param_1,iVar4,*(LPSTR *)this,cbMultiByte,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
      bVar7 = iVar4 == 0;
    }
    if (bVar7) {
      FUN_00406260();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

