
undefined4 * __thiscall FUN_0041d8f0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(this,param_1,param_1[4] + 1);
    }
  }
  else {
    *(undefined4 *)this = *param_1;
    *param_1 = 0;
  }
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return this;
}

