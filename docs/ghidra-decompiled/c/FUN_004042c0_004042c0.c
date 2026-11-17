
int __thiscall FUN_004042c0(void *this,uint param_1)

{
  undefined4 in_EAX;
  uint3 uVar2;
  DWORD DVar1;
  
  uVar2 = (uint3)((uint)in_EAX >> 8);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(undefined4 *)((int)this + 0x14) = 0x2000000;
    return (uint)uVar2 << 8;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    if (*(HANDLE *)((int)this + 4) == (HANDLE)0x0) {
      *(undefined4 *)((int)this + 0x14) = 0x1000000;
      return (uint)uVar2 << 8;
    }
    DVar1 = SetFilePointer(*(HANDLE *)((int)this + 4),*(int *)((int)this + 0x10) + param_1,
                           (PLONG)0x0,0);
    return CONCAT31((int3)(DVar1 >> 8),1);
  }
  uVar2 = (uint3)(param_1 >> 8);
  if (param_1 < *(uint *)((int)this + 0x28)) {
    *(uint *)((int)this + 0x24) = param_1;
    return CONCAT31(uVar2,1);
  }
  *(undefined4 *)((int)this + 0x14) = 0x30000;
  return (uint)uVar2 << 8;
}

