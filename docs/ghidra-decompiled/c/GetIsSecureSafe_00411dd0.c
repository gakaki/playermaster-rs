
/* public: int __thiscall CLanDevice::GetIsSecureSafe(void) */

int __thiscall CLanDevice::GetIsSecureSafe(CLanDevice *this)

{
                    /* 0x11dd0  226  ?GetIsSecureSafe@CLanDevice@@QAEHXZ */
  if (((*(int *)(this + 0x408) == 0) || (*(int *)(this + 0x40c) != 0)) ||
     (*(int *)(this + 0x408) == 0)) {
    return 1;
  }
  return 0;
}

