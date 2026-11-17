
/* public: void __thiscall CTimeEdit::SetMS(int) */

void __thiscall CTimeEdit::SetMS(CTimeEdit *this,int param_1)

{
                    /* 0x15e80  567  ?SetMS@CTimeEdit@@QAEXH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0x3b < param_1) {
    param_1 = 0x3b;
  }
  *(int *)(this + 0x80) = param_1;
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

