
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00410dc0(int *param_1)

{
  HWND__ *pHVar1;
  void *this;
  float fVar2;
  float fVar3;
  
  fVar2 = GetDpi();
  fVar2 = fVar2 * _DAT_0044ff30;
  fVar3 = GetDpi();
  if (param_1 == (int *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)param_1[8];
  }
  FUN_00405bf0(this,(int)(fVar3 * _DAT_0044ff3c),(int)fVar2);
  if (param_1 == (int *)0x0) {
    pHVar1 = (HWND__ *)0x0;
  }
  else {
    pHVar1 = (HWND__ *)param_1[8];
  }
  CWndShadow::Create((CWndShadow *)(param_1 + 0x68),pHVar1);
  fVar2 = GetDpi();
  CWndShadow::SetSize((CWndShadow *)(param_1 + 0x68),(int)(fVar2 * _DAT_0044fed0));
  CWndShadow::SetPosition((CWndShadow *)(param_1 + 0x68),0,0);
  FUN_00410e90((int)param_1);
  (**(code **)(*param_1 + 0x1c0))();
  return 1;
}

