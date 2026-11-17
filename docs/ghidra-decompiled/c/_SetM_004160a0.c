
/* protected: void __thiscall CTimeEdit::_SetM(int) */

void __thiscall CTimeEdit::_SetM(CTimeEdit *this,int param_1)

{
                    /* 0x160a0  664  ?_SetM@CTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x78) = 0;
    CTimeEdit::_CheckMinMax(this);
    return;
  }
  if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x78) = param_1;
  CTimeEdit::_CheckMinMax(this);
  return;
}

