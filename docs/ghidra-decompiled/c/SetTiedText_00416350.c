
/* public: void __thiscall CProgressCtrlX::SetTiedText(int) */

void __thiscall CProgressCtrlX::SetTiedText(CProgressCtrlX *this,int param_1)

{
  undefined4 uVar1;
  
                    /* 0x16350  630  ?SetTiedText@CProgressCtrlX@@QAEXH@Z */
  uVar1 = 0x1000;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  Ordinal_8655(uVar1,-(uint)(param_1 != 0) & 0x1000,0x20);
  return;
}

