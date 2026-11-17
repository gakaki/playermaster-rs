
/* public: void __thiscall CCellRange::operator=(class CCellRange const &) */

void __thiscall CCellRange::operator=(CCellRange *this,CCellRange *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x16770  25  ??4CCellRange@@QAEXABV0@@Z */
  if (this != param_1) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 8) = uVar2;
    *(undefined4 *)this = uVar3;
    *(undefined4 *)(this + 4) = uVar1;
  }
  return;
}

