
int __thiscall FUN_0043ab10(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  iVar2 = iVar3 * -0x6db6db6d;
  if ((uint)(iVar3 / 0x1c) < param_1) {
    iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
    if (0x9249249U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_0043a9e0(this,iVar2 + param_1);
    iVar2 = FUN_0043aa30(this,uVar1);
  }
  return iVar2;
}

