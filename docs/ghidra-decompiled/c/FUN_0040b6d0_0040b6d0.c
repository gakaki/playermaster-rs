
void FUN_0040b6d0(void)

{
  uint uVar1;
  IDataManager *pIVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  SHELLEXECUTEINFOW local_58;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  LPCWSTR local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044640d;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_18 + 0x14);
  ExceptionList = &local_10;
  pIVar2 = CommonData_Get();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x28))(uVar1);
  if (iVar3 != 0) {
    memset(&local_58,0,0x3c);
    local_58.cbSize = 0x3c;
    local_58.fMask = 0x40;
    local_58.lpVerb = L"open";
    local_58.nShow = 1;
    Ordinal_296();
    local_8 = 0;
    if ((*(int *)(iVar3 + 8) == 1) || (*(int *)(iVar3 + 8) == 2)) {
      piVar4 = (int *)CAppChecking::GetAppPath();
      local_8._0_1_ = 1;
      uVar5 = FUN_00405ae0(local_1c,piVar4,(short *)&DAT_0044e1d4);
      local_8 = CONCAT31(local_8._1_3_,2);
      Ordinal_1518(uVar5);
      Ordinal_1042();
    }
    else {
      piVar4 = (int *)CAppChecking::GetAppPath();
      local_8._0_1_ = 3;
      uVar5 = FUN_00405ae0(local_18,piVar4,L"Doc\\User Manual.pdf");
      local_8 = CONCAT31(local_8._1_3_,4);
      Ordinal_1518(uVar5);
      Ordinal_1042();
    }
    Ordinal_1042();
    local_58.lpFile = local_14;
    ShellExecuteExW(&local_58);
    Ordinal_1042();
  }
  ExceptionList = local_10;
  return;
}

