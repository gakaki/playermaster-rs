
/* public: void __thiscall CGridCtrl::EnableSelection(int) */

void __thiscall CGridCtrl::EnableSelection(CGridCtrl *this,int param_1)

{
                    /* 0x16f80  97  ?EnableSelection@CGridCtrl@@QAEXH@Z */
  CGridCtrl::ResetSelectedRange(this);
  *(int *)(this + 0x114) = param_1;
  CGridCtrl::ResetSelectedRange(this);
  return;
}

