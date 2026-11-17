
int __thiscall FUN_0041bfa0(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044757d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_280(param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  Ordinal_280(param_1 + 4);
  local_8._0_1_ = 1;
  Ordinal_280(param_1 + 8);
  local_8._0_1_ = 2;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  Ordinal_280(param_1 + 0x30);
  local_8 = CONCAT31(local_8._1_3_,3);
  Ordinal_280(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = uVar2;
  *(undefined4 *)((int)this + 0x44) = uVar3;
  ExceptionList = local_10;
  return (int)this;
}

