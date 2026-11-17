
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00409b50(int *param_1)

{
  HWND__ *pHVar1;
  IDataManager *pIVar2;
  int iVar3;
  void *this;
  float fVar4;
  float fVar5;
  
  fVar4 = GetDpi();
  fVar4 = fVar4 * _DAT_0044ff28;
  fVar5 = GetDpi();
  if (param_1 == (int *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)param_1[8];
  }
  FUN_00405bf0(this,(int)(fVar5 * _DAT_0044ff38),(int)fVar4);
  fVar4 = GetDpi();
  FUN_0040a160((int)param_1,(int)(fVar4 * _DAT_0044fee4));
  if (param_1 == (int *)0x0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = (HWND__ *)param_1[8];
  }
  CWndShadow::Create((CWndShadow *)(param_1 + 0x89),pHVar1);
  fVar4 = GetDpi();
  CWndShadow::SetSize((CWndShadow *)(param_1 + 0x89),(int)(fVar4 * _DAT_0044fed0));
  CWndShadow::SetPosition((CWndShadow *)(param_1 + 0x89),0,0);
  pIVar2 = CommonData_Get();
  if (pIVar2 != (IDataManager *)0x0) {
    iVar3 = (**(code **)(*(int *)pIVar2 + 0x2c))();
    if (iVar3 != 0) {
      param_1[0x9a] = (uint)(*(int *)(iVar3 + 8) == 1);
    }
  }
  FUN_00409cb0((int)param_1);
  (**(code **)(*param_1 + 0x1c0))();
  (**(code **)(*(int *)param_1[0x26] + 0x94))(param_1 + 0x27,param_1,2);
  (**(code **)(*(int *)param_1[0x26] + 0x94))(param_1 + 0x27,param_1,3);
  (**(code **)(*param_1 + 0x1b8))();
  Ordinal_13991(Ordinal_14459_exref,0,0,0,0,3);
  return 1;
}

