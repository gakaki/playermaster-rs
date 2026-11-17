
/* public: void __thiscall CColorTimeEdit::SetTotalIn100NS(unsigned __int64) */

void __thiscall CColorTimeEdit::SetTotalIn100NS(CColorTimeEdit *this,__uint64 param_1)

{
                    /* 0x14e00  638  ?SetTotalIn100NS@CColorTimeEdit@@QAEX_K@Z */
  CColorTimeEdit::_SetTotalIn100NS(this,param_1);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

