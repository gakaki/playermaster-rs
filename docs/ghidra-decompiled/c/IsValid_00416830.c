
/* public: int __thiscall CCellRange::IsValid(void)const  */

int __thiscall CCellRange::IsValid(CCellRange *this)

{
                    /* 0x16830  410  ?IsValid@CCellRange@@QBEHXZ */
  if ((((*(int *)this < 0) || (*(int *)(this + 4) < 0)) || (*(int *)(this + 8) < 0)) ||
     (((*(int *)(this + 0xc) < 0 || (*(int *)(this + 8) < *(int *)this)) ||
      (*(int *)(this + 0xc) < *(int *)(this + 4))))) {
    return 0;
  }
  return 1;
}

