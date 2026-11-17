
/* public: void __thiscall CColorTimeEdit::SetTime(int,int,int) */

void __thiscall CColorTimeEdit::SetTime(CColorTimeEdit *this,int param_1,int param_2,int param_3)

{
                    /* 0x14cd0  631  ?SetTime@CColorTimeEdit@@QAEXHHH@Z */
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (99 < param_1) {
    param_1 = 99;
  }
  *(int *)(this + 0x74) = param_1;
  CColorTimeEdit::_CheckMinMax(this);
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x3b < param_2) {
    param_2 = 0x3b;
  }
  *(int *)(this + 0x78) = param_2;
  CColorTimeEdit::_CheckMinMax(this);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (0x3b < param_3) {
    param_3 = 0x3b;
  }
  *(int *)(this + 0x7c) = param_3;
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

