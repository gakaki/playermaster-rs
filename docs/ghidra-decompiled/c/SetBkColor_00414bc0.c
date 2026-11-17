
/* public: void __thiscall CProgressCtrlX::SetBkColor(unsigned long) */

void __thiscall CProgressCtrlX::SetBkColor(CProgressCtrlX *this,ulong param_1)

{
                    /* 0x14bc0  462  ?SetBkColor@CProgressCtrlX@@QAEXK@Z
                       0x14bc0  495  ?SetFloat@CColorEditEx@@QAEXH@Z */
  *(ulong *)(this + 0x90) = param_1;
  return;
}

