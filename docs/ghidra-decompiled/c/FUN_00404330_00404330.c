
undefined4 __fastcall FUN_00404330(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)((int)param_1 + 0x2c) == '\0') {
    uVar1 = FUN_00404e00(param_1);
  }
  *(undefined1 *)((int)param_1 + 0x2c) = 1;
  if ((*(LPCVOID *)((int)param_1 + 0x20) != (LPCVOID)0x0) && (*(int *)((int)param_1 + 0xc) != 0)) {
    UnmapViewOfFile(*(LPCVOID *)((int)param_1 + 0x20));
  }
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (*(HANDLE *)((int)param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  if ((*(HANDLE *)((int)param_1 + 4) != (HANDLE)0x0) && (*(char *)((int)param_1 + 8) != '\0')) {
    CloseHandle(*(HANDLE *)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 8) = 0;
  return uVar1;
}

