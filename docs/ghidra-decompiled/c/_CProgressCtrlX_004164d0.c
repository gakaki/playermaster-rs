
/* public: virtual __thiscall CProgressCtrlX::~CProgressCtrlX(void) */

void __thiscall CProgressCtrlX::~CProgressCtrlX(CProgressCtrlX *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x164d0  21  ??1CProgressCtrlX@@UAE@XZ */
  puStack_c = &LAB_00446e19;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = _vftable__for__CProgressCtrl__;
  *(undefined ***)(this + 0x74) = _vftable__for__IColorProgressBar__;
  local_8 = 0;
  Ordinal_1128(uVar1);
  local_8 = 0xffffffff;
  Ordinal_1400();
  ExceptionList = local_10;
  return;
}

