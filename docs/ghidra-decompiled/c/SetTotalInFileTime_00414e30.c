
/* public: void __thiscall CColorTimeEdit::SetTotalInFileTime(struct _FILETIME) */

void __thiscall CColorTimeEdit::SetTotalInFileTime(CColorTimeEdit *this,_FILETIME param_1)

{
                    /* 0x14e30  640  ?SetTotalInFileTime@CColorTimeEdit@@QAEXU_FILETIME@@@Z */
  CColorTimeEdit::_SetTotalInFileTime(this,param_1);
  CColorTimeEdit::_CheckMinMax(this);
  CColorTimeEdit::Update(this,0);
  return;
}

