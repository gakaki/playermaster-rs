
/* public: void __thiscall CColorTimeEdit::SetS(int) */

void __thiscall CColorTimeEdit::SetS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14c50  593  ?SetS@CColorTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x7c) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

