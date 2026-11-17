
/* protected: void __thiscall CColorTimeEdit::SelS(void) */

void __thiscall CColorTimeEdit::SelS(CColorTimeEdit *this)

{
                    /* 0x15110  445  ?SelS@CColorTimeEdit@@IAEXXZ
                       0x15110  446  ?SelS@CTimeEdit@@IAEXXZ */
  SendMessageW(*(HWND *)(this + 0x20),0xb1,6,8);
  SendMessageW(*(HWND *)(this + 0x20),0xb7,0,0);
  return;
}

