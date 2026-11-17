
void __fastcall FUN_0040e220(int param_1)

{
  void *this;
  HRGN hRgn;
  tagRECT local_1c;
  uint local_c;
  
  local_c = DAT_0046400c ^ (uint)&local_1c;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&local_1c);
  this = *(void **)(param_1 + 0x9c);
  if (this != (void *)0x0) {
    *(LONG *)((int)this + 0xc) = local_1c.right - local_1c.left;
    FUN_00408090(this,local_1c.right - local_1c.left);
  }
  if (*(void **)(param_1 + 0xa0) != (void *)0x0) {
    FUN_00409400(*(void **)(param_1 + 0xa0),*(int *)(param_1 + 0x9c));
  }
  hRgn = CreateRectRgn(0,0,local_1c.right - local_1c.left,local_1c.bottom - local_1c.top);
  SetWindowRgn(*(HWND *)(param_1 + 0x20),hRgn,1);
  if (DAT_00464e48 != 0) {
    FUN_00410660();
  }
  Ordinal_3790();
  FUN_0041d025(local_c ^ (uint)&local_1c);
  return;
}

