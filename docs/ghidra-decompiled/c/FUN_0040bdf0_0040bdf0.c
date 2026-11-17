
int * __thiscall FUN_0040bdf0(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    if (uVar1 < 0x10) {
      piVar2 = this;
    }
    else {
      piVar2 = *(int **)this;
    }
    if (piVar2 <= param_1) {
      if (uVar1 < 0x10) {
        pvVar3 = this;
      }
      else {
        pvVar3 = *(void **)this;
      }
      if (param_1 < (int *)(*(int *)((int)this + 0x10) + (int)pvVar3)) {
        if (uVar1 < 0x10) {
          piVar2 = FUN_0040bcd0(this,this,(int)param_1 - (int)this,param_2);
          return piVar2;
        }
        piVar2 = FUN_0040bcd0(this,this,(int)param_1 - *(int *)this,param_2);
        return piVar2;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    FUN_0040bfc0(this,param_2,*(size_t *)((int)this + 0x10));
    if (param_2 == 0) {
      return this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (*(uint *)((int)this + 0x14) < 0x10) {
      *(undefined1 *)this = 0;
      return this;
    }
    **(undefined1 **)this = 0;
    return this;
  }
  if (*(uint *)((int)this + 0x14) < 0x10) {
    pvVar3 = this;
  }
  else {
    pvVar3 = *(void **)this;
  }
  if (param_2 != 0) {
    memcpy(pvVar3,param_1,param_2);
  }
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return this;
}

