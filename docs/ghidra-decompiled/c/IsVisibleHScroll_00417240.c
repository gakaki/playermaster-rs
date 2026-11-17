
/* public: int __thiscall CGridCtrl::IsVisibleHScroll(void) */

int __thiscall CGridCtrl::IsVisibleHScroll(CGridCtrl *this)

{
                    /* 0x17240  411  ?IsVisibleHScroll@CGridCtrl@@QAEHXZ */
  return (uint)(((byte)this[0x130] & 1) != 0);
}

