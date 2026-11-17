
/* public: int __thiscall CLanDevice::SetHasEncryption(int) */

int __thiscall CLanDevice::SetHasEncryption(CLanDevice *this,int param_1)

{
                    /* 0x11e20  510  ?SetHasEncryption@CLanDevice@@QAEHH@Z */
  *(int *)(this + 0x40c) = param_1;
  return param_1;
}

