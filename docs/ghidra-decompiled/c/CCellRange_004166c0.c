
/* public: __thiscall CCellRange::CCellRange(int,int,int,int) */

CCellRange * __thiscall
CCellRange::CCellRange(CCellRange *this,int param_1,int param_2,int param_3,int param_4)

{
                    /* 0x166c0  3  ??0CCellRange@@QAE@HHHH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return this;
}

