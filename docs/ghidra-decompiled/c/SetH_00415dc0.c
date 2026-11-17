
/* public: void __thiscall CTimeEdit::SetH(int) */

void __thiscall CTimeEdit::SetH(CTimeEdit *this,int param_1)

{
                    /* 0x15dc0  506  ?SetH@CTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (99 < param_1) {
    param_1 = 99;
  }
  *(int *)(this + 0x74) = param_1;
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

