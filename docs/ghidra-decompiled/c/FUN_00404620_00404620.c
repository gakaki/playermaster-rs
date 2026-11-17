
/* WARNING: Removing unreachable block (ram,0x00404673) */

undefined4 __fastcall FUN_00404620(int param_1)

{
  if ((*(char *)(param_1 + 0x74) != '\0') && (*(HANDLE *)(param_1 + 0x70) != (HANDLE)0x0)) {
    CloseHandle(*(HANDLE *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((*(int *)(param_1 + 100) == -1) || (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68))) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
    return 0;
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x68);
  return 0x60000;
}

