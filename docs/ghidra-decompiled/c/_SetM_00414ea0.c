
/* protected: void __thiscall CColorTimeEdit::_SetM(int) */

void __thiscall CColorTimeEdit::_SetM(CColorTimeEdit *this,int param_1)

{
                    /* 0x14ea0  663  ?_SetM@CColorTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x78) = 0;
    CColorTimeEdit::_CheckMinMax(this);
    return;
  }
  if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x78) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  return;
}

