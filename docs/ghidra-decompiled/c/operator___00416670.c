
/* public: int __thiscall CCellID::operator!=(class CCellID const &)const  */

int __thiscall CCellID::operator!=(CCellID *this,CCellID *param_1)

{
                    /* 0x16670  49  ??9CCellID@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 0;
  }
  return 1;
}

