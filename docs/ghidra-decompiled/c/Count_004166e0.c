
/* public: int __thiscall CCellRange::Count(void) */

int __thiscall CCellRange::Count(CCellRange *this)

{
                    /* 0x166e0  86  ?Count@CCellRange@@QAEHXZ */
  return ((*(int *)(this + 0xc) - *(int *)(this + 4)) + 1) *
         ((*(int *)(this + 8) - *(int *)this) + 1);
}

