
void __fastcall FUN_00409ac0(CColorBaseDlg *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00445fa8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = CModeSelectDlg::vftable;
  local_8 = 1;
  CWndShadow::~CWndShadow((CWndShadow *)(param_1 + 0x224));
  local_8 = local_8 & 0xffffff00;
  CEditEx::~CEditEx((CEditEx *)(param_1 + 0x1a0));
  local_8 = 0xffffffff;
  CColorBaseDlg::~CColorBaseDlg(param_1);
  ExceptionList = local_10;
  return;
}

