
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0040c910(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  HINSTANCE pHVar4;
  HICON pHVar5;
  IDataManager *pIVar6;
  int iVar7;
  float fVar8;
  LPCWSTR pWVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004465fb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_458(0x66,0,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  *param_1 = CPlayerMasterDlg::vftable;
  pvVar2 = (void *)Ordinal_1506(0xa8);
  local_8._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00407140(pvVar2,(float)param_1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x27] = puVar3;
  puVar3 = (undefined4 *)Ordinal_1506(0x10);
  local_8._0_1_ = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CMainTitileDraw::vftable;
    puVar3[1] = param_1;
    puVar3[2] = 0;
    fVar8 = GetDpi();
    puVar3[3] = (int)(fVar8 * _DAT_0044fec8);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  param_1[0x28] = puVar3;
  puVar3 = (undefined4 *)Ordinal_1506(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = CDealLableEvent::vftable;
    puVar3[1] = 0;
  }
  param_1[0x29] = puVar3;
  CWndShadow::CWndShadow((CWndShadow *)(param_1 + 0x2a));
  local_8._0_1_ = 3;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_004103c0(param_1 + 0x3e);
  param_1[0x4e] = 1;
  Ordinal_982();
  local_8._0_1_ = 4;
  param_1[0x73] = 0;
  pvVar2 = (void *)Ordinal_1506(0x1c);
  local_8._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    DAT_00464e48 = (undefined4 *)0x0;
  }
  else {
    DAT_00464e48 = FUN_00410470(pvVar2,param_1);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(param_1[0x29] + 4) = param_1[0x27];
  iVar7 = param_1[0x27];
  iVar1 = *(int *)(iVar7 + 0x98);
  if (iVar1 != 0) {
    if (iVar1 != -0x1a0) {
      *(undefined4 *)(iVar1 + 0x1a8) = 0;
    }
    if (*(int *)(iVar7 + 0x98) != -0x208) {
      *(undefined4 *)(*(int *)(iVar7 + 0x98) + 0x210) = 0;
    }
    if (*(int *)(iVar7 + 0x98) != -0x270) {
      *(undefined4 *)(*(int *)(iVar7 + 0x98) + 0x278) = 0;
    }
    *(undefined4 *)(*(int *)(iVar7 + 0x98) + 0x140) = 1;
  }
  if (*(int *)(param_1[0x27] + 0x98) != 0) {
    *(undefined4 *)(*(int *)(param_1[0x27] + 0x98) + 0x360) = 0;
  }
  Ordinal_2204();
  pWVar9 = (LPCWSTR)0x80;
  pHVar4 = (HINSTANCE)Ordinal_2173(0x80,0xe,0x80);
  pHVar5 = LoadIconW(pHVar4,pWVar9);
  param_1[0x26] = pHVar5;
  param_1[0x3e] = 0xe0e0e0;
  param_1[0x3f] = 0xe0e0e0;
  param_1[0x40] = 0xf5f5f5;
  param_1[0x41] = 0xf5f5f5;
  param_1[0x42] = 0xffffff;
  param_1[0x43] = 0xffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0xfcf1dd;
  param_1[0x46] = 0xfcf1dd;
  param_1[0x47] = 0;
  param_1[0x48] = 0xffffff;
  param_1[0x49] = 0xffffff;
  param_1[0x4a] = 0x6d6d6d;
  param_1[0x4b] = 0xeaeaea;
  param_1[0x4c] = 0xeaeaea;
  param_1[0x4d] = 0x6d6d6d;
  Ordinal_2204();
  pWVar9 = (LPCWSTR)0x80;
  pHVar4 = (HINSTANCE)Ordinal_2173(0x80,0xe,0x80);
  pHVar5 = LoadIconW(pHVar4,pWVar9);
  param_1[0x26] = pHVar5;
  pIVar6 = CommonData_Get();
  if (pIVar6 != (IDataManager *)0x0) {
    pIVar6 = CommonData_Get();
    iVar7 = (**(code **)(*(int *)pIVar6 + 0x2c))();
    if ((*(uint *)(iVar7 + 0x3c) & 0x4000) != 0) {
      *(uint *)(iVar7 + 0x3c) = *(uint *)(iVar7 + 0x3c) ^ 0x4000 | 0x400;
    }
    if ((DAT_00464e48 != (undefined4 *)0x0) && ((int *)DAT_00464e48[2] != (int *)0x0)) {
      (**(code **)(*(int *)DAT_00464e48[2] + 0x7c))();
    }
  }
  param_1[0x74] = 0;
  ExceptionList = local_10;
  return param_1;
}

