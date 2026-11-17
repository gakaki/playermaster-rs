
/* public: void __thiscall CLanDevice::SetIsLock(int) */

void __thiscall CLanDevice::SetIsLock(CLanDevice *this,int param_1)

{
                    /* 0x11da0  535  ?SetIsLock@CLanDevice@@QAEXH@Z */
  *(int *)(this + 0x404) = param_1;
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x40c) = 1;
  }
  return;
}

