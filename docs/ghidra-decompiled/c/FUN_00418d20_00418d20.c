
undefined4 __thiscall FUN_00418d20(void *this,uint param_1)

{
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x5555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  iVar1 = Ordinal_1506(param_1 * 0x30);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *(int *)this = iVar1;
  *(int *)((int)this + 4) = iVar1;
  iVar1 = iVar1 + param_1 * 0x30;
  *(int *)((int)this + 8) = iVar1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

