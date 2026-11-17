
/* public: int __thiscall CCellID::IsValid(void)const  */

int __thiscall CCellID::IsValid(CCellID *this)

{
                    /* 0x16620  409  ?IsValid@CCellID@@QBEHXZ */
  if ((*(int *)this < 0) || (*(int *)(this + 4) < 0)) {
    return 0;
  }
  return 1;
}

