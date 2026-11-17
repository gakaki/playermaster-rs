
CColorBaseDlg * __thiscall FUN_00409a30(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445fa8;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = CModeSelectDlg::vftable;
  local_8 = 1;
  CWndShadow::~CWndShadow((CWndShadow *)((int)this + 0x224));
  local_8 = local_8 & 0xffffff00;
  CEditEx::~CEditEx((CEditEx *)((int)this + 0x1a0));
  local_8 = 0xffffffff;
  CColorBaseDlg::~CColorBaseDlg(this);
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this,uVar1);
  }
  ExceptionList = local_10;
  return this;
}

