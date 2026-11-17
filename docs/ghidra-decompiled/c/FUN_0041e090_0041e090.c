
void __thiscall FUN_0041e090(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0046400c ^ (uint)(local_20 + 7);
  if (((*(uint *)((int)this + 0x3c) & 2) == 0) &&
     (uVar1 = **(uint **)((int)this + 0x20), uVar1 != 0)) {
    uVar2 = *(uint *)((int)this + 0x38);
    if (*(uint *)((int)this + 0x38) < uVar1) {
      uVar2 = uVar1;
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (uint)local_20[0]._1_3_ << 8;
    FUN_0040bdf0(local_20,(int *)**(undefined4 **)((int)this + 0x10),
                 uVar2 - (int)**(undefined4 **)((int)this + 0x10));
    FUN_0041d8f0(param_1,local_20);
    if (0xf < local_c) {
      Ordinal_1508(local_20[0]);
      FUN_0041d025(local_8 ^ (uint)(local_20 + 7));
      return;
    }
  }
  else {
    if (((*(uint *)((int)this + 0x3c) & 4) == 0) && (**(int **)((int)this + 0x1c) != 0)) {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (uint)local_20[0]._1_3_ << 8;
      FUN_0040bdf0(local_20,(int *)**(undefined4 **)((int)this + 0xc),
                   (**(int **)((int)this + 0x2c) + **(int **)((int)this + 0x1c)) -
                   (int)**(undefined4 **)((int)this + 0xc));
    }
    else {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (uint)local_20[0]._1_3_ << 8;
    }
    FUN_0041d8f0(param_1,local_20);
    if (0xf < local_c) {
      Ordinal_1508(local_20[0]);
    }
  }
  FUN_0041d025(local_8 ^ (uint)(local_20 + 7));
  return;
}

