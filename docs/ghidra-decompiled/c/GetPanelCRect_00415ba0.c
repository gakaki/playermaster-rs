
/* public: class CRect __thiscall CCustomDrawData::GetPanelCRect(void) */

void __thiscall CCustomDrawData::GetPanelCRect(CCustomDrawData *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000004;
  
                    /* 0x15ba0  267  ?GetPanelCRect@CCustomDrawData@@QAE?AVCRect@@XZ */
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(this + 0xc);
  uVar3 = *(undefined4 *)(this + 0x10);
  *in_stack_00000004 = *(undefined4 *)(this + 4);
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar2;
  in_stack_00000004[3] = uVar3;
  return;
}

