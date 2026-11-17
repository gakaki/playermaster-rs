
/* public: void __thiscall CColorTimeEdit::SetSegValue(unsigned long,int) */

void __thiscall CColorTimeEdit::SetSegValue(CColorTimeEdit *this,ulong param_1,int param_2)

{
                    /* 0x14d70  599  ?SetSegValue@CColorTimeEdit@@QAEXKH@Z */
  CColorTimeEdit::_SetSegValue(this,param_1,param_2);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

