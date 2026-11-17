
/* public: void __thiscall CGridCtrl::EnableDragRowMode(bool) */

void __thiscall CGridCtrl::EnableDragRowMode(CGridCtrl *this,bool param_1)

{
                    /* 0x172a0  93  ?EnableDragRowMode@CGridCtrl@@QAEX_N@Z */
  this[0x4d4] = (CGridCtrl)param_1;
  if (param_1) {
    *(undefined4 *)(this + 0x100) = 1;
  }
  return;
}

