
/* public: void __thiscall CGridCtrl::SetGridColor(unsigned long) */

void __thiscall CGridCtrl::SetGridColor(CGridCtrl *this,ulong param_1)

{
                    /* 0x16c40  501  ?SetGridColor@CGridCtrl@@QAEXK@Z
                       0x16c40  502  ?SetGridLineColor@CGridCtrl@@QAEXK@Z */
  *(ulong *)(this + 0xcc) = param_1;
  return;
}

