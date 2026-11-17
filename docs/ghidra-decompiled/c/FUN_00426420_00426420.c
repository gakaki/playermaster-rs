
void __thiscall FUN_00426420(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 == 0) {
LAB_00426455:
    memmove(_Dst,*(void **)this,*(int *)((int)this + 4) - (int)*(void **)this & 0xfffffff8);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      Ordinal_1508(iVar1);
    }
    *(void **)this = _Dst;
    *(void **)((int)this + 8) = (void *)((int)_Dst + param_1 * 8);
    *(void **)((int)this + 4) = (void *)((int)_Dst + (iVar2 - iVar1 >> 3) * 8);
    return;
  }
  if (param_1 < 0x20000000) {
    _Dst = (void *)Ordinal_1506(param_1 * 8);
    if (_Dst != (void *)0x0) goto LAB_00426455;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}

