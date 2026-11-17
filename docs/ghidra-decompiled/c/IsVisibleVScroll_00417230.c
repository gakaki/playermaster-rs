
/* public: int __thiscall CGridCtrl::IsVisibleVScroll(void) */

int __thiscall CGridCtrl::IsVisibleVScroll(CGridCtrl *this)

{
                    /* 0x17230  412  ?IsVisibleVScroll@CGridCtrl@@QAEHXZ */
  return (uint)(((byte)this[0x130] & 2) != 0);
}

