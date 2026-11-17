
/* public: void __thiscall CProgressCtrlX::SetTextColor(unsigned long,unsigned long) */

void __thiscall CProgressCtrlX::SetTextColor(CProgressCtrlX *this,ulong param_1,ulong param_2)

{
                    /* 0x162f0  628  ?SetTextColor@CProgressCtrlX@@QAEXKK@Z */
  *(ulong *)(this + 0x98) = param_1;
  if (param_2 != 0xffffffff) {
    param_1 = param_2;
  }
  *(ulong *)(this + 0x9c) = param_1;
  return;
}

