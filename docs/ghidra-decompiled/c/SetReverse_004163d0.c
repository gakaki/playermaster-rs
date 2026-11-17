
/* public: void __thiscall CProgressCtrlX::SetReverse(int) */

void __thiscall CProgressCtrlX::SetReverse(CProgressCtrlX *this,int param_1)

{
  undefined4 uVar1;
  
                    /* 0x163d0  589  ?SetReverse@CProgressCtrlX@@QAEXH@Z */
  uVar1 = 0x4000;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  Ordinal_8655(uVar1,-(uint)(param_1 != 0) & 0x4000,0x20);
  return;
}

