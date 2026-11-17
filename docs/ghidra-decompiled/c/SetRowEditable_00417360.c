
/* public: void __thiscall CGridCtrl::SetRowEditable(int,int) */

void __thiscall CGridCtrl::SetRowEditable(CGridCtrl *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  CGridCtrl *pCVar3;
  CGridCtrl *pCVar4;
  
                    /* 0x17360  590  ?SetRowEditable@CGridCtrl@@QAEXHH@Z */
  iVar1 = 0;
  if (param_2 == 0) {
    pCVar3 = this + 0x74;
    while( true ) {
      if (*(int *)pCVar3 == 0) {
        *(int *)(this + iVar1 * 4 + 0x74) = param_1;
        return;
      }
      if (*(int *)pCVar3 == param_1) break;
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 4;
      if (0xf < iVar1) {
        return;
      }
    }
  }
  else {
    pCVar3 = this + 0x74;
    while ((*(int *)pCVar3 == 0 || (*(int *)pCVar3 != param_1))) {
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 4;
      if (0xf < iVar1) {
        return;
      }
    }
    if (iVar1 < 0x10) {
      pCVar3 = this + iVar1 * 4 + 0x78;
      pCVar4 = this + iVar1 * 4 + 0x74;
      for (iVar2 = 0x10 - iVar1; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)pCVar4 = *(undefined4 *)pCVar3;
        pCVar3 = pCVar3 + 4;
        pCVar4 = pCVar4 + 4;
      }
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  return;
}

