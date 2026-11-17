
undefined4 FUN_0040ef30(void)

{
  uint uVar1;
  IDataManager *pIVar2;
  int iVar3;
  HWND hWnd;
  BOOL BVar4;
  WPARAM wParam;
  undefined4 uVar5;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446832;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  uVar5 = 0;
  pIVar2 = CommonData_Get();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x28))(uVar1);
  if (iVar3 != 0) {
    uVar5 = *(undefined4 *)(iVar3 + 8);
  }
  Ordinal_286(L"LEDSetting.exe");
  local_8 = 0;
  iVar3 = FUN_0040fac0();
  local_8 = 0xffffffff;
  Ordinal_1042();
  hWnd = (HWND)FUN_0040fbe0(iVar3);
  if (hWnd != (HWND)0x0) {
    BVar4 = IsWindow(hWnd);
    if ((BVar4 != 0) && (iVar3 != 0)) {
      Ordinal_296();
      local_8 = 1;
      Ordinal_4772(&local_14,&DAT_0044e914,uVar5);
      local_28 = 6;
      local_24 = *(int *)(local_14 + -0xc) * 2;
      local_20 = Ordinal_5020();
      wParam = 0;
      if (local_1c != 0) {
        wParam = *(WPARAM *)(local_1c + 0x20);
      }
      SendMessageW(hWnd,0x4a,wParam,(LPARAM)&local_28);
      Ordinal_12430(0xffffffff);
      Ordinal_1042();
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

