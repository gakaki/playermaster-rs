
/* public: class CCellID __thiscall CGridCtrl::GetFocusCell(void)const  */

void __thiscall CGridCtrl::GetFocusCell(CGridCtrl *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x16ec0  166  ?GetFocusCell@CGridCtrl@@QBE?AVCCellID@@XZ */
  uVar1 = *(undefined4 *)(this + 0x3b8);
  *in_stack_00000004 = *(undefined4 *)(this + 0x3b4);
  in_stack_00000004[1] = uVar1;
  return;
}

