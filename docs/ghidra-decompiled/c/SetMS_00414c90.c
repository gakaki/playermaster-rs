
/* public: void __thiscall CColorTimeEdit::SetMS(int) */

void __thiscall CColorTimeEdit::SetMS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14c90  566  ?SetMS@CColorTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x80) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

