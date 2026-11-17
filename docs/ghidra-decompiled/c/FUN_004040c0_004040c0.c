
undefined4 __thiscall FUN_004040c0(void *this,LPCWSTR param_1)

{
  HANDLE pvVar1;
  
  if ((((*(int *)((int)this + 4) != 0) || (*(int *)((int)this + 0xc) != 0)) ||
      (*(int *)((int)this + 0x20) != 0)) ||
     (((*(int *)((int)this + 0x18) != 0 || (*(int *)((int)this + 0x14) != 0)) ||
      (*(char *)((int)this + 0x2c) != '\0')))) {
    return 0x1000000;
  }
  pvVar1 = CreateFileW(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    *(undefined4 *)((int)this + 4) = 0;
    return 0x200;
  }
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 8) = 1;
  return 0;
}

