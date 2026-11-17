
/* protected: void __thiscall CColorTimeEdit::SelNone(void) */

void __thiscall CColorTimeEdit::SelNone(CColorTimeEdit *this)

{
                    /* 0x15170  443  ?SelNone@CColorTimeEdit@@IAEXXZ
                       0x15170  444  ?SelNone@CTimeEdit@@IAEXXZ */
  SendMessageW(*(HWND *)(this + 0x20),0xb1,0xffffffff,0);
  SendMessageW(*(HWND *)(this + 0x20),0xb7,0,0);
  return;
}

