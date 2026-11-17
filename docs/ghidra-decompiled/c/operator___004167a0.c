
/* public: int __thiscall CCellRange::operator==(class CCellRange const &) */

int __thiscall CCellRange::operator==(CCellRange *this,CCellRange *param_1)

{
                    /* 0x167a0  48  ??8CCellRange@@QAEHABV0@@Z */
  if ((((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) &&
      (*(int *)(this + 8) == *(int *)(param_1 + 8))) &&
     (*(int *)(this + 0xc) == *(int *)(param_1 + 0xc))) {
    return 1;
  }
  return 0;
}

