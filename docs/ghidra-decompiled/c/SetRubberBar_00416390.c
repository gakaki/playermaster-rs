
/* public: void __thiscall CProgressCtrlX::SetRubberBar(int) */

void __thiscall CProgressCtrlX::SetRubberBar(CProgressCtrlX *this,int param_1)

{
  undefined4 uVar1;
  
                    /* 0x16390  592  ?SetRubberBar@CProgressCtrlX@@QAEXH@Z */
  uVar1 = 0x2000;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  Ordinal_8655(uVar1,-(uint)(param_1 != 0) & 0x2000,0x20);
  return;
}

