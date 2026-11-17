
/* public: int __thiscall CGridCtrl::RowIsEditable(int)const  */

int __thiscall CGridCtrl::RowIsEditable(CGridCtrl *this,int param_1)

{
  int iVar1;
  CGridCtrl *pCVar2;
  
                    /* 0x17320  434  ?RowIsEditable@CGridCtrl@@QBEHH@Z */
  iVar1 = 0;
  pCVar2 = this + 0x74;
  while ((*(int *)pCVar2 == 0 || (*(int *)pCVar2 != param_1))) {
    iVar1 = iVar1 + 1;
    pCVar2 = pCVar2 + 4;
    if (0xf < iVar1) {
      return 1;
    }
  }
  return 0;
}

