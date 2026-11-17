
void __thiscall FUN_004264a0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 3)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 3;
  if (0x1fffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_00426420(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_00426420(this,uVar1);
  return;
}

