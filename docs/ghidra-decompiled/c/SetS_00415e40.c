
/* public: void __thiscall CTimeEdit::SetS(int) */

void __thiscall CTimeEdit::SetS(CTimeEdit *this,int param_1)

{
                    /* 0x15e40  594  ?SetS@CTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x7c) = param_1;
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

