
/* public: int __thiscall CCellRange::InRange(class CCellID const &)const  */

int __thiscall CCellRange::InRange(CCellRange *this,CCellID *param_1)

{
                    /* 0x16890  384  ?InRange@CCellRange@@QBEHABVCCellID@@@Z */
  if ((((*(int *)param_1 < *(int *)this) || (*(int *)(this + 8) < *(int *)param_1)) ||
      (*(int *)(param_1 + 4) < *(int *)(this + 4))) ||
     (*(int *)(this + 0xc) < *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}

