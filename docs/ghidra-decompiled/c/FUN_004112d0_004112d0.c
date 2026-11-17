
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004112d0(int param_1)

{
  int iVar1;
  IDataManager *pIVar2;
  CModuleLanguageTrans *this;
  undefined4 uVar3;
  CServerData *this_00;
  undefined4 *puVar4;
  ICustomControl *pIVar5;
  undefined4 unaff_EBX;
  undefined4 uStack_24;
  undefined1 local_20 [4];
  float fStack_1c;
  undefined1 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00446a6a;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  Ordinal_296(DAT_0046400c ^ (uint)(local_20 + -0x10));
  uStack_c = 0;
  Ordinal_296();
  uStack_c._0_1_ = 1;
  pIVar2 = CommonData_Get();
  this = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar2 + 0x28))();
  if (this != (CModuleLanguageTrans *)0x0) {
    uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)&fStack_1c,(wchar_t *)0x5);
    uStack_c._0_1_ = 2;
    Ordinal_1518(uVar3);
    puStack_10._0_1_ = 1;
    Ordinal_1042();
    uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)local_20,(wchar_t *)0x5);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
    Ordinal_1518(uVar3);
    local_14._0_1_ = 1;
    Ordinal_1042();
    uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)&uStack_24,(wchar_t *)0x5);
    local_14 = (void *)CONCAT31(local_14._1_3_,4);
    Ordinal_1518(uVar3);
    uStack_18 = 1;
    Ordinal_1042();
    uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)(local_20 + -8),(wchar_t *)0x5);
    uStack_18 = 5;
    Ordinal_1518(uVar3);
    fStack_1c._0_1_ = 1;
    Ordinal_1042();
    uVar3 = CModuleLanguageTrans::TranslateString(this,(uint)(local_20 + -0xc),(wchar_t *)0x5);
    fStack_1c = (float)CONCAT31(fStack_1c._1_3_,6);
    Ordinal_1518(uVar3);
    local_20[0] = 1;
    Ordinal_1042();
  }
  pIVar2 = CommonData_Get();
  this_00 = (CServerData *)(**(code **)(*(int *)pIVar2 + 0x30))();
  if (this_00 != (CServerData *)0x0) {
    uVar3 = CServerData::GetServerUserName(this_00);
    uStack_c._0_1_ = 7;
    Ordinal_1518(uVar3);
    puStack_10._0_1_ = 1;
    Ordinal_1042();
    puVar4 = (undefined4 *)
             FUN_004115d0(local_20,*(uint *)(this_00 + 0x30),*(uint *)(this_00 + 0x34));
    puStack_10._0_1_ = 8;
    Ordinal_4772(*(int *)(param_1 + 0x15c) + 0x4e0,uStack_24,*puVar4);
    puStack_10._0_1_ = 1;
    Ordinal_1042();
    puVar4 = (undefined4 *)
             FUN_004115d0(local_20,*(uint *)(this_00 + 0x38) - *(uint *)(this_00 + 0x30),
                          (*(int *)(this_00 + 0x3c) - *(int *)(this_00 + 0x34)) -
                          (uint)(*(uint *)(this_00 + 0x38) < *(uint *)(this_00 + 0x30)));
    puStack_10._0_1_ = 9;
    Ordinal_4772(*(int *)(param_1 + 0x15c) + 0x5ac,unaff_EBX,*puVar4);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    Ordinal_1042();
  }
  if (*(int *)(param_1 + 0x1e4) != 0) {
    Ordinal_3839();
    if (*(int **)(param_1 + 0x1e4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1e4) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  puVar4 = (undefined4 *)Ordinal_1506(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *puVar4 = CFont::vftable;
  }
  *(undefined4 **)(param_1 + 0x1e4) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    pIVar5 = ColorLightControl_GetInterface();
    if (pIVar5 != (ICustomControl *)0x0) {
      pIVar5 = ColorLightControl_GetInterface();
      uVar3 = 400;
      iVar1 = *(int *)pIVar5;
      fStack_1c = GetDpi();
      (**(code **)(iVar1 + 0x34))
                (*(undefined4 *)(param_1 + 0x1e4),(int)(fStack_1c * _DAT_0044fee4),uVar3);
    }
  }
  Ordinal_1042();
  Ordinal_1042();
  ExceptionList = local_14;
  return;
}

