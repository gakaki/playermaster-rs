
/* protected: void __thiscall CColorTimeEdit::SelMS(void) */

void __thiscall CColorTimeEdit::SelMS(CColorTimeEdit *this)

{
                    /* 0x15140  441  ?SelMS@CColorTimeEdit@@IAEXXZ
                       0x15140  442  ?SelMS@CTimeEdit@@IAEXXZ */
  SendMessageW(*(HWND *)(this + 0x20),0xb1,9,0xc);
  SendMessageW(*(HWND *)(this + 0x20),0xb7,0,0);
  return;
}

