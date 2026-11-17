
/* public: int __thiscall CCellRange::operator!=(class CCellRange const &) */

int __thiscall CCellRange::operator!=(CCellRange *this,CCellRange *param_1)

{
                    /* 0x167e0  50  ??9CCellRange@@QAEHABV0@@Z */
  if ((((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
      (*(int *)(this + 8) == *(int *)(param_1 + 8))) &&
     (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  return 1;
}

