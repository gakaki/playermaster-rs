
/* public: class CGridCellBase * __thiscall CGridCtrl::GetDefaultCell(int,int)const  */

CGridCellBase * __thiscall CGridCtrl::GetDefaultCell(CGridCtrl *this,int param_1,int param_2)

{
  CGridCellBase *pCVar1;
  
                    /* 0x17410  147  ?GetDefaultCell@CGridCtrl@@QBEPAVCGridCellBase@@HH@Z */
  if (param_1 == 0) {
    pCVar1 = (CGridCellBase *)(this + 0x224);
    if (param_2 == 0) {
      pCVar1 = (CGridCellBase *)(this + 0x1b8);
    }
    return pCVar1;
  }
  if (param_2 == 0) {
    return (CGridCellBase *)(this + 0x290);
  }
  return (CGridCellBase *)(this + 0x2fc);
}

