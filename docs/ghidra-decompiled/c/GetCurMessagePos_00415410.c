
/* public: class CPoint __thiscall CMouseDownMoveManager::GetCurMessagePos(void) */

void __thiscall CMouseDownMoveManager::GetCurMessagePos(CMouseDownMoveManager *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x15410  138  ?GetCurMessagePos@CMouseDownMoveManager@@QAE?AVCPoint@@XZ */
  uVar1 = *(undefined4 *)(this + 0x4c);
  *in_stack_00000004 = *(undefined4 *)(this + 0x48);
  in_stack_00000004[1] = uVar1;
  return;
}

