
/* public: void __thiscall CTimeEdit::SetSegValue(unsigned long,int) */

void __thiscall CTimeEdit::SetSegValue(CTimeEdit *this,ulong param_1,int param_2)

{
                    /* 0x15f60  600  ?SetSegValue@CTimeEdit@@QAEXKH@Z */
  CTimeEdit::_SetSegValue(this,param_1,param_2);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

