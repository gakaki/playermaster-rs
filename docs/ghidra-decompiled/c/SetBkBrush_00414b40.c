
/* public: void __thiscall CProgressCtrlX::SetBkBrush(class CBrush *) */

void __thiscall CProgressCtrlX::SetBkBrush(CProgressCtrlX *this,CBrush *param_1)

{
                    /* 0x14b40  459  ?SetBkBrush@CProgressCtrlX@@QAEXPAVCBrush@@@Z
                       0x14b40  530  ?SetIsFitToWindowsNameCheck@CColorEditEx@@QAEXH@Z */
  *(CBrush **)(this + 0x94) = param_1;
  return;
}

