
/* protected: void __thiscall CColorTimeEdit::_SetH(int) */

void __thiscall CColorTimeEdit::_SetH(CColorTimeEdit *this,int param_1)

{
                    /* 0x14e70  661  ?_SetH@CColorTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x74) = 0;
    CColorTimeEdit::_CheckMinMax(this);
    return;
  }
  if (99 < param_1) {
    param_1 = 99;
  }
  *(int *)(this + 0x74) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  return;
}

