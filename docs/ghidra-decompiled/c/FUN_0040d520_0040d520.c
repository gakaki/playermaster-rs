
void __fastcall FUN_0040d520(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x15c) == 0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x13c) + 0x168))(param_1,1), iVar1 != 0)) {
    Ordinal_1987(param_1,&DAT_0044d16c,0,0);
    SendMessageW(*(HWND *)(param_1 + 0x15c),0x401,0,0);
    SendMessageW(*(HWND *)(param_1 + 0x15c),0x403,0,200);
    SendMessageW(*(HWND *)(param_1 + 0x15c),0x403,2,6000);
    SendMessageW(*(HWND *)(param_1 + 0x15c),0x418,0,400);
  }
  return;
}

