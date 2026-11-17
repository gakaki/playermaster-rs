
/* public: void __thiscall CColorTimeEdit::SetH(int) */

void __thiscall CColorTimeEdit::SetH(CColorTimeEdit *this,int param_1)

{
                    /* 0x14bd0  505  ?SetH@CColorTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (99 < param_1) {
    param_1 = 99;
  }
  *(int *)(this + 0x74) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

