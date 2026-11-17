
/* public: class CCellID & __thiscall CCellID::operator=(class CCellID const &) */

CCellID * __thiscall CCellID::operator=(CCellID *this,CCellID *param_1)

{
                    /* 0x153f0  24  ??4CCellID@@QAEAAV0@ABV0@@Z
                       0x153f0  34  ??4CDrawCache@@QAEAAV0@ABV0@@Z
                       0x153f0  35  ??4CEditChange@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return this;
}

