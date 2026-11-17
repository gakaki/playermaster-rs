
size_t __thiscall FUN_00404570(void *this,byte *param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  BOOL BVar3;
  uint _Size;
  void *local_8;
  
  local_8 = this;
  if (*(int *)((int)this + 0x78) == 0) {
    if (*(HANDLE *)((int)this + 0x70) == (HANDLE)0x0) {
      *(undefined4 *)((int)this + 0x14) = 0x1000000;
    }
    else {
      BVar3 = ReadFile(*(HANDLE *)((int)this + 0x70),param_1,param_2,(LPDWORD)&local_8,
                       (LPOVERLAPPED)0x0);
      pvVar1 = local_8;
      if (BVar3 != 0) {
        *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + (int)local_8;
        uVar2 = FUN_00403dc0(*(uint *)((int)this + 0x6c),param_1,(uint)local_8);
        *(uint *)((int)this + 0x6c) = uVar2;
        return (size_t)pvVar1;
      }
    }
  }
  else {
    uVar2 = *(uint *)((int)this + 0x80);
    if (uVar2 < *(uint *)((int)this + 0x7c)) {
      _Size = *(uint *)((int)this + 0x7c) - uVar2;
      if (param_2 < _Size) {
        _Size = param_2;
      }
      memcpy(param_1,(void *)(uVar2 + *(int *)((int)this + 0x78)),_Size);
      *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + _Size;
      *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + _Size;
      uVar2 = FUN_00403dc0(*(uint *)((int)this + 0x6c),param_1,_Size);
      *(uint *)((int)this + 0x6c) = uVar2;
      return _Size;
    }
  }
  return 0;
}

