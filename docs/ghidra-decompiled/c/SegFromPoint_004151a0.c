
/* public: unsigned long __thiscall CColorTimeEdit::SegFromPoint(class CPoint const &) */

ulong __thiscall CColorTimeEdit::SegFromPoint(CColorTimeEdit *this,CPoint *param_1)

{
  LRESULT LVar1;
  ulong uVar2;
  
                    /* 0x151a0  435  ?SegFromPoint@CColorTimeEdit@@QAEKABVCPoint@@@Z */
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0xd7,0,
                       *(int *)(param_1 + 4) << 0x10 | *(uint *)param_1 & 0xffff);
  uVar2 = CColorTimeEdit::GetSeg(this,LVar1);
  return uVar2;
}

