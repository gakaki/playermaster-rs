
void __thiscall FUN_0040d650(void *this,int param_1,WPARAM param_2)

{
  LRESULT LVar1;
  tagRECT local_18;
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  if (param_1 != 0) {
    FUN_0040d520((int)this);
    LVar1 = SendMessageW(*(HWND *)((int)this + 0x15c),0x40d,0,0);
    if (LVar1 == 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(*(HWND *)((int)this + 0x20),&local_18);
      Ordinal_1987(this,param_1,&local_18,1);
    }
    Ordinal_14406(param_1,this,0);
    SendMessageW(*(HWND *)((int)this + 0x15c),0x401,param_2,0);
  }
  FUN_0041d025(local_8 ^ (int)register0x00000010 - 4U);
  return;
}

