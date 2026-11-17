
/* public: int __thiscall CCellRange::InRange(int,int)const  */

int __thiscall CCellRange::InRange(CCellRange *this,int param_1,int param_2)

{
                    /* 0x16860  385  ?InRange@CCellRange@@QBEHHH@Z */
  if ((((param_1 < *(int *)this) || (*(int *)(this + 8) < param_1)) ||
      (param_2 < *(int *)(this + 4))) || (*(int *)(this + 0xc) < param_2)) {
    return 0;
  }
  return 1;
}

