
CColorBaseDlg * __fastcall FUN_00405070(CColorBaseDlg *param_1)

{
  uint uVar1;
  ICustomControl *pIVar2;
  int *piVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  CColorBaseDlg *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445958;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = param_1;
  CColorBaseDlg::CColorBaseDlg(param_1,0x85,(CWnd *)0x0);
  local_8 = 0;
  *(undefined ***)param_1 = CAboutDlg::vftable;
  CWndShadow::CWndShadow((CWndShadow *)(param_1 + 0x1a0));
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  CColorBaseDlg::SetCustomerBkColor(param_1,1,0xf0f0f0);
  pIVar2 = ColorLightControl_GetInterface();
  piVar3 = (int *)(**(code **)(*(int *)pIVar2 + 4))(uVar1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xa0))(1);
    FUN_00405e50(&local_38);
    local_38 = 0xff6389df;
    uStack_34 = 0xff6389df;
    uStack_30 = 0xffffffff;
    uStack_2c = 0xffffffff;
    local_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_20 = 0xffffffff;
    uStack_1c = 0xffffffff;
    (**(code **)(*piVar3 + 0xa4))
              (0xff6389df,0xff6389df,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
               0xffffffff,0);
  }
  ExceptionList = local_10;
  return param_1;
}

