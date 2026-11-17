
/* public: void __thiscall CColorTimeEdit::SetTotalInS(int) */

void __thiscall CColorTimeEdit::SetTotalInS(CColorTimeEdit *this,int param_1)

{
                    /* 0x14da0  644  ?SetTotalInS@CColorTimeEdit@@QAEXH@Z */
  CColorTimeEdit::_SetTotalInS(this,param_1);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

