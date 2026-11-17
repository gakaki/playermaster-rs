
/* public: void __thiscall CProgressCtrlX::SetBorders(class CRect const &) */

void __thiscall CProgressCtrlX::SetBorders(CProgressCtrlX *this,CRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x16460  463  ?SetBorders@CProgressCtrlX@@QAEXABVCRect@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xac) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0xb0) = uVar1;
  *(undefined4 *)(this + 0xb4) = uVar2;
  *(undefined4 *)(this + 0xb8) = uVar3;
  return;
}

