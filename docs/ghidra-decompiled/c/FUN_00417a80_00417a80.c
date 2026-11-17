
undefined4 * __thiscall FUN_00417a80(void *this,int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_00418b50(this,(param_1[1] - *param_1) / 0x48);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    pvVar2 = FUN_0041b6b0(*param_1,param_1[1],*(void **)this);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}

