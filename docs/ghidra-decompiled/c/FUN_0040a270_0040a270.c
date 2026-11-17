
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0040a270(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  wchar_t *local_18;
  wchar_t *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004460ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = Ordinal_12755(0x5c,DAT_0046400c ^ (int)register0x00000010 - 4U);
  Ordinal_8639(&local_18,iVar2 + 1,*(int *)(*param_2 + -0xc) - iVar2);
  local_8 = 1;
  iVar2 = Ordinal_12755(0x5c);
  Ordinal_8639(&local_14,iVar2 + 1,*(int *)(*param_3 + -0xc) - iVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00405ae0(param_1,param_2,L".zip");
  piVar3 = FUN_00404ed0((LPCWSTR)*param_1);
  if (piVar3 == (int *)0x0) {
    _DAT_00464e40 = 0x10000;
  }
  else if (*piVar3 == 2) {
    _DAT_00464e40 = FUN_00404820((void *)piVar3[1],local_18,(LPCWSTR)*param_2);
  }
  else {
    _DAT_00464e40 = 0x80000;
  }
  if (piVar3 == (int *)0x0) {
    _DAT_00464e40 = 0x10000;
  }
  else {
    if (*piVar3 == 2) {
      _DAT_00464e40 = FUN_00404820((void *)piVar3[1],local_14,(LPCWSTR)*param_3);
    }
    else {
      _DAT_00464e40 = 0x80000;
    }
    if (*piVar3 == 2) {
      piVar1 = (int *)piVar3[1];
      _DAT_00464e40 = FUN_00404330(piVar1);
      if (piVar1 != (int *)0x0) {
        FUN_00404fd0(piVar1);
      }
      Ordinal_1508(piVar3);
    }
    else {
      _DAT_00464e40 = 0x80000;
    }
  }
  DeleteFileW((LPCWSTR)*param_2);
  DeleteFileW((LPCWSTR)*param_3);
  Ordinal_1042();
  Ordinal_1042();
  ExceptionList = local_10;
  return param_1;
}

