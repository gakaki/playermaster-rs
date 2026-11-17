
/* public: void __thiscall CTimeEdit::SetTime(int,int,int,int) */

void __thiscall CTimeEdit::SetTime(CTimeEdit *this,int param_1,int param_2,int param_3,int param_4)

{
                    /* 0x15f30  634  ?SetTime@CTimeEdit@@QAEXHHHH@Z */
  _SetTime(this,param_1,param_2,param_3,param_4);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

