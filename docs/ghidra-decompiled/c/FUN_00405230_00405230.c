
void __fastcall FUN_00405230(CColorBaseDlg *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445998;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)param_1 = CAboutDlg::vftable;
  local_8 = 1;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    Ordinal_3839(uVar1);
    if (*(int **)(param_1 + 0x1e4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1e4) + 4))(1);
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  local_8 = local_8 & 0xffffff00;
  CWndShadow::~CWndShadow((CWndShadow *)(param_1 + 0x1a0));
  local_8 = 0xffffffff;
  CColorBaseDlg::~CColorBaseDlg(param_1);
  ExceptionList = local_10;
  return;
}

