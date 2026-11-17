
/* public: int __thiscall CLanDevice::GetHasForceChecked(void) */

int __thiscall CLanDevice::GetHasForceChecked(CLanDevice *this)

{
                    /* 0x11e50  188  ?GetHasForceChecked@CLanDevice@@QAEHXZ */
  if ((*(int *)(this + 0x414) == 0) && (*(int *)(this + 0x408) != 0)) {
    return 0;
  }
  return 1;
}

