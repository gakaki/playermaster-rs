
int __thiscall FUN_004140c0(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446cc4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_296(DAT_0046400c ^ (int)register0x00000010 - 4U);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  local_8 = 1;
  if (this != (void *)param_1) {
    Ordinal_1518(param_1);
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    FUN_004181c0((void *)((int)this + 0x20),(int *)(param_1 + 0x20));
  }
  ExceptionList = local_10;
  return (int)this;
}

