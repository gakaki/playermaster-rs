
void __thiscall FUN_0043c7c0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar1 + param_1;
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0043c6f0(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0043c6f0(this,uVar2);
  return;
}

