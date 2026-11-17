
/* public: void __thiscall CProgressCtrlX::SetSnake(int) */

void __thiscall CProgressCtrlX::SetSnake(CProgressCtrlX *this,int param_1)

{
  undefined4 uVar1;
  
                    /* 0x16410  608  ?SetSnake@CProgressCtrlX@@QAEXH@Z */
  uVar1 = 0xa000;
  if (param_1 != 0) {
    uVar1 = 0;
  }
  Ordinal_8655(uVar1,-(uint)(param_1 != 0) & 0xa000,0x20);
  return;
}

