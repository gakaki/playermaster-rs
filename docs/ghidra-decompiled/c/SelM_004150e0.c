
/* protected: void __thiscall CColorTimeEdit::SelM(void) */

void __thiscall CColorTimeEdit::SelM(CColorTimeEdit *this)

{
                    /* 0x150e0  439  ?SelM@CColorTimeEdit@@IAEXXZ
                       0x150e0  440  ?SelM@CTimeEdit@@IAEXXZ */
  SendMessageW(*(HWND *)(this + 0x20),0xb1,3,5);
  SendMessageW(*(HWND *)(this + 0x20),0xb7,0,0);
  return;
}

