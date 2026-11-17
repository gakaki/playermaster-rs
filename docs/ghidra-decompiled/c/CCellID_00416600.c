
/* public: __thiscall CCellID::CCellID(int,int) */

CCellID * __thiscall CCellID::CCellID(CCellID *this,int param_1,int param_2)

{
                    /* 0x16600  2  ??0CCellID@@QAE@HH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return this;
}

