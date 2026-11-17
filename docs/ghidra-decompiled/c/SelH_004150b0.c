
/* protected: void __thiscall CColorTimeEdit::SelH(void) */

void __thiscall CColorTimeEdit::SelH(CColorTimeEdit *this)

{
                    /* 0x150b0  437  ?SelH@CColorTimeEdit@@IAEXXZ
                       0x150b0  438  ?SelH@CTimeEdit@@IAEXXZ */
  SendMessageW(*(HWND *)(this + 0x20),0xb1,0,2);
  SendMessageW(*(HWND *)(this + 0x20),0xb7,0,0);
  return;
}

