
int __thiscall FUN_004043a0(void *this,LPCWSTR param_1)

{
  HANDLE hObject;
  int iVar1;
  
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  if (param_1 == (LPCWSTR)0x0) {
    return 0x10000;
  }
  hObject = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0x200;
  }
  iVar1 = FUN_00404450(this,hObject);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0x74) = 1;
    return 0;
  }
  CloseHandle(hObject);
  return iVar1;
}

