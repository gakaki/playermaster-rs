
CColorBaseDlg * __fastcall FUN_00409900(CColorBaseDlg *param_1)

{
  ICustomControl *pIVar1;
  int *piVar2;
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
  puStack_c = &LAB_00445f67;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = param_1;
  CColorBaseDlg::CColorBaseDlg(param_1,0x81,(CWnd *)0x0);
  local_8 = 0;
  *(undefined ***)param_1 = CModeSelectDlg::vftable;
  CEditEx::CEditEx((CEditEx *)(param_1 + 0x1a0));
  local_8._0_1_ = 1;
  CWndShadow::CWndShadow((CWndShadow *)(param_1 + 0x224));
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined4 *)(param_1 + 0x268) = 1;
  CColorBaseDlg::SetCustomerBkColor(param_1,1,0xffffff);
  pIVar1 = ColorLightControl_GetInterface();
  if (pIVar1 != (ICustomControl *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)pIVar1 + 4))();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xa0))(1);
      FUN_00405e50(&local_38);
      local_38 = 0xff6389df;
      uStack_34 = 0xff6389df;
      uStack_30 = 0xff7697e3;
      uStack_2c = 0xff7697e3;
      local_28 = 0xff6389df;
      uStack_24 = 0xff6e98f5;
      uStack_20 = 0xff597ac6;
      uStack_1c = 0xff6991ec;
      (**(code **)(*piVar2 + 0xa4))
                (0xff6389df,0xff6389df,0xff7697e3,0xff7697e3,0xff6389df,0xff6e98f5,0xff597ac6,
                 0xff6991ec,0xffffff);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

