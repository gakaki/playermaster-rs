
/* public: void __thiscall CColorOutBarCtrl::SetBackColor(unsigned long) */

void __thiscall CColorOutBarCtrl::SetBackColor(CColorOutBarCtrl *this,ulong param_1)

{
                    /* 0x15300  452  ?SetBackColor@CColorOutBarCtrl@@QAEXK@Z
                       0x15300  461  ?SetBkColor@CGridCtrl@@QAEXK@Z
                       0x15300  500  ?SetGridBkColor@CGridCtrl@@QAEXK@Z */
  *(ulong *)(this + 200) = param_1;
  return;
}

