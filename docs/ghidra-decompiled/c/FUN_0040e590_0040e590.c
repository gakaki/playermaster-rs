
void __fastcall FUN_0040e590(int param_1)

{
  tagPOINT local_10;
  undefined4 local_8;
  
  ReleaseCapture();
  GetCursorPos(&local_10);
  local_8 = CONCAT22((undefined2)local_10.y,(undefined2)local_10.x);
  SendMessageW(*(HWND *)(param_1 + 0x20),0xa2,2,local_8);
  Ordinal_3790();
  return;
}

