
void __thiscall FUN_0040bfc0(void *this,uint param_1,size_t param_2)

{
  uint uVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00446460;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 == 0xffffffff) {
    uVar3 = param_1;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    if ((uVar3 / 3 < uVar2) && (uVar3 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar3 = 0xfffffffe;
    }
  }
  local_8 = 0;
  local_18 = (void *)0x0;
  if ((uVar3 + 1 != 0) && (local_18 = (void *)Ordinal_1506(uVar3 + 1), local_18 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x14) < 0x10) {
      _Src = this;
    }
    else {
      _Src = *(void **)this;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2);
    }
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    Ordinal_1508(*(undefined4 *)this);
  }
  *(undefined1 *)this = 0;
  *(void **)this = local_18;
  *(uint *)((int)this + 0x14) = uVar3;
  *(size_t *)((int)this + 0x10) = param_2;
  if (0xf < uVar3) {
    this = local_18;
  }
  *(undefined1 *)((int)this + param_2) = 0;
  ExceptionList = local_10;
  return;
}

