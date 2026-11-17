
undefined4 * __thiscall FUN_00418f20(void *this,int *param_1)

{
  undefined4 uVar1;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447098;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_00419880();
  *(undefined4 *)this = uVar1;
  local_8 = 1;
  local_18 = local_18 & 0xffffff00;
  FUN_00419ab0(this,param_1,local_18);
  ExceptionList = local_10;
  return this;
}

