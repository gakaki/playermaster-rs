
/* public: void __thiscall CCustomDrawData::SetPanelCrect(class CRect) */

void __thiscall
CCustomDrawData::SetPanelCrect
          (CCustomDrawData *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
                    /* 0x15c90  581  ?SetPanelCrect@CCustomDrawData@@QAEXVCRect@@@Z */
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = param_5;
  return;
}

