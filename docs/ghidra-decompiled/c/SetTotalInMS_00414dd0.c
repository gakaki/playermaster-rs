
/* public: void __thiscall CColorTimeEdit::SetTotalInMS(int) */

void __thiscall CColorTimeEdit::SetTotalInMS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14dd0  642  ?SetTotalInMS@CColorTimeEdit@@QAEXH@Z */
  CColorTimeEdit::_SetTotalInMS(this,param_1);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

