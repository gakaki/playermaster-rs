
/* public: class CPoint __thiscall CCusFormView::GetStartIndex(void) */

void __thiscall CCusFormView::GetStartIndex(CCusFormView *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x15a00  327  ?GetStartIndex@CCusFormView@@QAE?AVCPoint@@XZ */
  uVar1 = *(undefined4 *)(this + 0x1c);
  *in_stack_00000004 = *(undefined4 *)(this + 0x20);
  in_stack_00000004[1] = uVar1;
  return;
}

