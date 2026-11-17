
/* public: void __thiscall CACEdit::SetSeparator(wchar_t const *,wchar_t) */

void __thiscall CACEdit::SetSeparator(CACEdit *this,wchar_t *param_1,wchar_t param_2)

{
                    /* 0x15a80  602  ?SetSeparator@CACEdit@@QAEXPB_W_W@Z */
  Ordinal_1520(param_1);
  *(wchar_t *)(this + 0x36c) = param_2;
  *(wchar_t *)(this + 0x160) = param_2;
  CACEdit::SetMode(this,2);
  return;
}

