
/* public: void __thiscall CProgressCtrlX::SetShowPercent(int) */

void __thiscall CProgressCtrlX::SetShowPercent(CProgressCtrlX *this,int param_1)

{
  wchar_t *pwVar1;
  
                    /* 0x16310  605  ?SetShowPercent@CProgressCtrlX@@QAEXH@Z */
  pwVar1 = L"%d%%";
  if (param_1 == 0) {
    pwVar1 = (wchar_t *)0x0;
  }
  CProgressCtrlX::SetTextFormat(this,pwVar1,0x100);
  return;
}

