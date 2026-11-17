
/* public: int __thiscall CCellID::operator==(class CCellID const &)const  */

int __thiscall CCellID::operator==(CCellID *this,CCellID *param_1)

{
                    /* 0x16640  47  ??8CCellID@@QBEHABV0@@Z */
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return 1;
  }
  return 0;
}

