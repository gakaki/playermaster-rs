
/* protected: void __thiscall CColorTimeEdit::_SetS(int) */

void __thiscall CColorTimeEdit::_SetS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14ed0  667  ?_SetS@CColorTimeEdit@@IAEXH@Z
                       0x14ed0  668  ?_SetS@CTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x7c) = 0;
    return;
  }
  if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x7c) = param_1;
  return;
}

