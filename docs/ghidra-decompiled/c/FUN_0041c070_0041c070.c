
undefined4 * __thiscall FUN_0041c070(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004475a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_0041c1c0(this,param_1[1] - *param_1 >> 6);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    puVar2 = FUN_0041bc90((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}

