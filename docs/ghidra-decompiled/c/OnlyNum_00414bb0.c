
/* public: void __thiscall CColorEditEx::OnlyNum(int) */

void __thiscall CColorEditEx::OnlyNum(CColorEditEx *this,int param_1)

{
                    /* 0x14bb0  428  ?OnlyNum@CColorEditEx@@QAEXH@Z
                       0x14bb0  454  ?SetBarBrush@CProgressCtrlX@@QAEXPAVCBrush@@@Z
                       0x14bb0  649  ?SetTrimTrailingZeros@CNumSpinCtrl@@QAEXH@Z */
  *(int *)(this + 0x8c) = param_1;
  return;
}

