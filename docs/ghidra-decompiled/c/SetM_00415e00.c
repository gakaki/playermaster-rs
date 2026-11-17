
/* public: void __thiscall CTimeEdit::SetM(int) */

void __thiscall CTimeEdit::SetM(CTimeEdit *this,int param_1)

{
                    /* 0x15e00  565  ?SetM@CTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x78) = param_1;
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

