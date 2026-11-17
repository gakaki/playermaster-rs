
undefined4 FUN_0040fbb0(HWND param_1,DWORD param_2)

{
  DWORD local_8;
  
  GetWindowThreadProcessId(param_1,&local_8);
  if (local_8 == param_2) {
    FUN_0040fe80(&param_1);
  }
  return 1;
}

