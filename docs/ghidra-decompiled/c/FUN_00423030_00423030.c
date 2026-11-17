
void __thiscall FUN_00423030(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (0x15555555U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar1 + param_1;
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (0x15555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_00422f60(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_00422f60(this,uVar2);
  return;
}

