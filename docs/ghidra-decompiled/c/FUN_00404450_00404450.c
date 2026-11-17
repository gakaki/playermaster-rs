
int __thiscall FUN_00404450(void *this,HANDLE param_1)

{
  HANDLE hFile;
  DWORD DVar1;
  int iVar2;
  void *local_8;
  
  hFile = param_1;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  if ((param_1 == (HANDLE)0x0) || (param_1 == (HANDLE)0xffffffff)) {
    iVar2 = 0x10000;
  }
  else {
    local_8 = this;
    DVar1 = SetFilePointer(*(HANDLE *)((int)this + 4),0,(PLONG)0x0,1);
    if (DVar1 == 0xffffffff) {
      *(undefined4 *)((int)this + 0x4c) = 0x80000000;
      *(DWORD *)((int)this + 100) = 0xffffffff;
      *(undefined1 *)((int)this + 0x60) = 0;
      FUN_004011a0((undefined4 *)((int)this + 0x50),(ushort *)&param_1,(ushort *)&local_8);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x50);
      *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x50);
      *(HANDLE *)((int)this + 0x70) = hFile;
      *(uint *)((int)this + 0x5c) = CONCAT22(param_1._0_2_,local_8._0_2_);
      return 0;
    }
    iVar2 = FUN_00401260(hFile,(uint *)((int)this + 0x4c),(DWORD *)((int)this + 100),
                         (undefined4 *)((int)this + 0x50),(uint *)((int)this + 0x5c));
    if (iVar2 == 0) {
      SetFilePointer(hFile,0,(PLONG)0x0,0);
      *(undefined1 *)((int)this + 0x60) = 1;
      *(HANDLE *)((int)this + 0x70) = hFile;
      return 0;
    }
  }
  return iVar2;
}

