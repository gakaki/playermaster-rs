
/* public: void __thiscall CTimeEdit::SetTotalInFileTime(struct _FILETIME) */

void __thiscall CTimeEdit::SetTotalInFileTime(CTimeEdit *this,_FILETIME param_1)

{
                    /* 0x16030  641  ?SetTotalInFileTime@CTimeEdit@@QAEXU_FILETIME@@@Z */
  CTimeEdit::_SetTotalInFileTime(this,param_1);
  CTimeEdit::_CheckMinMax(this);
  CTimeEdit::Update(this,0);
  return;
}

