
/* public: void __thiscall CTimeEdit::SetTotalIn100NS(unsigned __int64) */

void __thiscall CTimeEdit::SetTotalIn100NS(CTimeEdit *this,__uint64 param_1)

{
                    /* 0x16000  639  ?SetTotalIn100NS@CTimeEdit@@QAEX_K@Z */
  CTimeEdit::_SetTotalIn100NS(this,param_1);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

