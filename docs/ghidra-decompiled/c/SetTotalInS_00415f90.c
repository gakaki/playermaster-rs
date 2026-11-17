
/* public: void __thiscall CTimeEdit::SetTotalInS(int) */

void __thiscall CTimeEdit::SetTotalInS(CTimeEdit *this,int param_1)

{
                    /* 0x15f90  645  ?SetTotalInS@CTimeEdit@@QAEXH@Z */
  CTimeEdit::_SetTotalInS(this,param_1);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

