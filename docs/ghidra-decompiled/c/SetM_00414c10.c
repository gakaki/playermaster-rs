
/* public: void __thiscall CColorTimeEdit::SetM(int) */

void __thiscall CColorTimeEdit::SetM(CColorTimeEdit *this,int param_1)

{
                    /* 0x14c10  564  ?SetM@CColorTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x78) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

