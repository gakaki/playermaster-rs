
/* public: void __thiscall CColorListCtrlEx::LockHead(int) */

void __thiscall CColorListCtrlEx::LockHead(CColorListCtrlEx *this,int param_1)

{
                    /* 0x15250  415  ?LockHead@CColorListCtrlEx@@QAEXH@Z
                       0x15250  489  ?SetEditable@CGridCtrl@@QAEXH@Z
                       0x15250  547  ?SetIsResizeImage@CCusFormView@@QAEXH@Z */
  *(int *)(this + 0xf8) = param_1;
  return;
}

