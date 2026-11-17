
/* protected: void __thiscall CTimeEdit::_SetH(int) */

void __thiscall CTimeEdit::_SetH(CTimeEdit *this,int param_1)

{
                    /* 0x16070  662  ?_SetH@CTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x74) = 0;
    CTimeEdit::_CheckMinMax(this);
    return;
  }
  if (99 < param_1) {
    param_1 = 99;
  }
  *(int *)(this + 0x74) = param_1;
  CTimeEdit::_CheckMinMax(this);
  return;
}

