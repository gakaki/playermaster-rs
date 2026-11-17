
/* public: void __thiscall CCellRange::Set(int,int,int,int) */

void __thiscall CCellRange::Set(CCellRange *this,int param_1,int param_2,int param_3,int param_4)

{
                    /* 0x16750  447  ?Set@CCellRange@@QAEXHHHH@Z */
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  *(int *)(this + 8) = param_3;
  *(int *)(this + 0xc) = param_4;
  return;
}

