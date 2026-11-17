
int * __thiscall FUN_0040bef0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (uVar1 - param_1 <= param_2) {
    *(uint *)((int)this + 0x10) = param_1;
    if (*(uint *)((int)this + 0x14) < 0x10) {
      *(undefined1 *)((int)this + param_1) = 0;
      return this;
    }
    *(undefined1 *)(*(int *)this + param_1) = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x14) < 0x10) {
      pvVar2 = this;
    }
    else {
      pvVar2 = *(void **)this;
    }
    iVar3 = uVar1 - param_2;
    if (iVar3 - param_1 != 0) {
      memmove((void *)((int)pvVar2 + param_1),(void *)((int)((int)pvVar2 + param_1) + param_2),
              iVar3 - param_1);
    }
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return this;
}

