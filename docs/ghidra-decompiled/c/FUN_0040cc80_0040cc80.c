
void __fastcall FUN_0040cc80(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446647;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *param_1 = CPlayerMasterDlg::vftable;
  local_8 = 2;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1,uVar1);
    param_1[0x27] = 0;
  }
  if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x28])(1);
    param_1[0x28] = 0;
  }
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
    param_1[0x29] = 0;
  }
  local_8._0_1_ = 1;
  Ordinal_1457();
  local_8 = (uint)local_8._1_3_ << 8;
  CWndShadow::~CWndShadow((CWndShadow *)(param_1 + 0x2a));
  local_8 = 0xffffffff;
  Ordinal_1108();
  ExceptionList = local_10;
  return;
}

