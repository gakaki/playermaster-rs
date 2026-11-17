
void FUN_0040ff70(uint param_1)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 == 0) {
LAB_0040ffa4:
    memmove(_Dst,(void *)DAT_00464e74,DAT_00464e78 - DAT_00464e74 & 0xfffffffc);
    iVar1 = DAT_00464e78 - DAT_00464e74;
    if (DAT_00464e74 != 0) {
      Ordinal_1508(DAT_00464e74);
    }
    DAT_00464e74 = (int)_Dst;
    DAT_00464e7c = (int)((int)_Dst + param_1 * 4);
    DAT_00464e78 = (int)((int)_Dst + (iVar1 >> 2) * 4);
    return;
  }
  if (param_1 < 0x40000000) {
    _Dst = (void *)Ordinal_1506(param_1 * 4);
    if (_Dst != (void *)0x0) goto LAB_0040ffa4;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}

