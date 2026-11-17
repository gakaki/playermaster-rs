
/* protected: void __thiscall CColorTimeEdit::_SetMS(int) */

void __thiscall CColorTimeEdit::_SetMS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14f00  665  ?_SetMS@CColorTimeEdit@@IAEXH@Z
                       0x14f00  666  ?_SetMS@CTimeEdit@@IAEXH@Z */
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x80) = 0;
    return;
  }
  if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x80) = param_1;
  return;
}

