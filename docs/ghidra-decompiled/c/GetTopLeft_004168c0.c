
/* public: class CCellID __thiscall CCellRange::GetTopLeft(void)const  */

void __thiscall CCellRange::GetTopLeft(CCellRange *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x168c0  355  ?GetTopLeft@CCellRange@@QBE?AVCCellID@@XZ */
  uVar1 = *(undefined4 *)(this + 4);
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = uVar1;
  return;
}

