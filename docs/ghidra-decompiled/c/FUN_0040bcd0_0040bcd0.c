
int * __thiscall FUN_0040bcd0(void *this,int *param_1,uint param_2,uint param_3)

{
  void *_Dst;
  uint uVar1;
  
  if ((uint)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_1[4] - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (this == param_1) {
    uVar1 = uVar1 + param_2;
    if (*(uint *)((int)this + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xout_of_range("invalid string position");
    }
    *(uint *)((int)this + 0x10) = uVar1;
    if (*(uint *)((int)this + 0x14) < 0x10) {
      *(undefined1 *)((int)this + uVar1) = 0;
      FUN_0040bef0(this,0,param_2);
      return this;
    }
    *(undefined1 *)(*(int *)this + uVar1) = 0;
    FUN_0040bef0(this,0,param_2);
    return this;
  }
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar1) {
    FUN_0040bfc0(this,uVar1,*(size_t *)((int)this + 0x10));
    if (uVar1 == 0) {
      return this;
    }
  }
  else if (uVar1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (*(uint *)((int)this + 0x14) < 0x10) {
      *(undefined1 *)this = 0;
      return this;
    }
    **(undefined1 **)this = 0;
    return this;
  }
  if (0xf < (uint)param_1[5]) {
    param_1 = (int *)*param_1;
  }
  if (*(uint *)((int)this + 0x14) < 0x10) {
    _Dst = this;
  }
  else {
    _Dst = *(void **)this;
  }
  if (uVar1 != 0) {
    memcpy(_Dst,(void *)((int)param_1 + param_2),uVar1);
  }
  *(uint *)((int)this + 0x10) = uVar1;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar1) = 0;
    return this;
  }
  *(undefined1 *)(*(int *)this + uVar1) = 0;
  return this;
}

