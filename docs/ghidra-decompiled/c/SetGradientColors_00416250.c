
/* public: void __thiscall CProgressCtrlX::SetGradientColors(unsigned long,unsigned long) */

void __thiscall CProgressCtrlX::SetGradientColors(CProgressCtrlX *this,ulong param_1,ulong param_2)

{
                    /* 0x16250  498  ?SetGradientColors@CProgressCtrlX@@QAEXKK@Z */
  Ordinal_13821(2,0xffffffff);
  if (*(int *)(this + 0x80) < 1) {
    Ordinal_2341();
  }
  **(ulong **)(this + 0x7c) = param_1;
  if (*(int *)(this + 0x80) < 2) {
    Ordinal_2341();
  }
  *(ulong *)(*(int *)(this + 0x7c) + 4) = param_2;
  return;
}

