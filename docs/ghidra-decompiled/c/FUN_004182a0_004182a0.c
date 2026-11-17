
undefined4 * __thiscall FUN_004182a0(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446fd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_00418e70(this,(param_1[1] - *param_1) / 0x2c);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pvVar2 = FUN_0041b980(*param_1,param_1[1],*(void **)this);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}

