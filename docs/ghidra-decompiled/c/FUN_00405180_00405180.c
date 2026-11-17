
CColorBaseDlg * __thiscall FUN_00405180(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445998;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = CAboutDlg::vftable;
  local_8 = 1;
  if (*(int *)((int)this + 0x1e4) != 0) {
    Ordinal_3839(uVar1);
    if (*(int **)((int)this + 0x1e4) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x1e4) + 4))(1);
    }
    *(undefined4 *)((int)this + 0x1e4) = 0;
  }
  local_8 = local_8 & 0xffffff00;
  CWndShadow::~CWndShadow((CWndShadow *)((int)this + 0x1a0));
  local_8 = 0xffffffff;
  CColorBaseDlg::~CColorBaseDlg(this);
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  ExceptionList = local_10;
  return this;
}

