
/* public: void __thiscall CProgressCtrlX::GetGradientColors(unsigned long &,unsigned long &) */

void __thiscall
CProgressCtrlX::GetGradientColors(CProgressCtrlX *this,ulong *param_1,ulong *param_2)

{
  CProgressCtrlX *extraout_EDX;
  CProgressCtrlX *extraout_EDX_00;
  
                    /* 0x162a0  174  ?GetGradientColors@CProgressCtrlX@@QAEXAAK0@Z */
  if (*(int *)(this + 0x80) < 1) {
    Ordinal_2341();
    this = extraout_EDX;
  }
  *param_1 = **(ulong **)(this + 0x7c);
  if (*(int *)(this + 0x80) < 2) {
    Ordinal_2341();
    this = extraout_EDX_00;
  }
  *param_2 = *(ulong *)(*(int *)(this + 0x7c) + 4);
  return;
}

