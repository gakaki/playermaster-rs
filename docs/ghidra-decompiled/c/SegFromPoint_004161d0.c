
/* public: unsigned long __thiscall CTimeEdit::SegFromPoint(class CPoint const &) */

ulong __thiscall CTimeEdit::SegFromPoint(CTimeEdit *this,CPoint *param_1)

{
  LRESULT LVar1;
  ulong uVar2;
  
                    /* 0x161d0  436  ?SegFromPoint@CTimeEdit@@QAEKABVCPoint@@@Z */
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0xd7,0,
                       *(int *)(param_1 + 4) << 0x10 | *(uint *)param_1 & 0xffff);
  uVar2 = CTimeEdit::GetSeg(this,LVar1);
  return uVar2;
}

