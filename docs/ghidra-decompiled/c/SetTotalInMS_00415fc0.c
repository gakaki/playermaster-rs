
/* public: void __thiscall CTimeEdit::SetTotalInMS(int) */

void __thiscall CTimeEdit::SetTotalInMS(CTimeEdit *this,int param_1)

{
                    /* 0x15fc0  643  ?SetTotalInMS@CTimeEdit@@QAEXH@Z */
  CTimeEdit::_SetTotalInMS(this,param_1);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

