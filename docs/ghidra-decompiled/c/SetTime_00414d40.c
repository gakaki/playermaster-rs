
/* public: void __thiscall CColorTimeEdit::SetTime(int,int,int,int) */

void __thiscall
CColorTimeEdit::SetTime(CColorTimeEdit *this,int param_1,int param_2,int param_3,int param_4)

{
                    /* 0x14d40  632  ?SetTime@CColorTimeEdit@@QAEXHHHH@Z */
  _SetTime(this,param_1,param_2,param_3,param_4);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

