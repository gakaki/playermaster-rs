
undefined4 * __thiscall FUN_00414990(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446d2b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  FUN_00418730((void *)((int)this + 0x20),param_1 + 8);
  local_8 = 0;
  FUN_00417850((void *)((int)this + 0x2c),param_1 + 0xb);
  ExceptionList = local_10;
  return this;
}

