
void __fastcall FUN_0040d1d0(int param_1)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  tagRECT tStack_7c;
  HDC local_68;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0046400c ^ (uint)&tStack_7c;
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x20));
  if (BVar1 == 0) {
    Ordinal_10919();
    FUN_0041d025(local_c ^ (uint)&tStack_7c);
    return;
  }
  Ordinal_887(param_1);
  SendMessageW(*(HWND *)(param_1 + 0x20),0x27,(WPARAM)local_68,0);
  iVar2 = GetSystemMetrics(0xb);
  iVar3 = GetSystemMetrics(0xc);
  tStack_7c.left = 0;
  tStack_7c.top = 0;
  tStack_7c.right = 0;
  tStack_7c.bottom = 0;
  GetClientRect(*(HWND *)(param_1 + 0x20),&tStack_7c);
  DrawIcon(local_68,(((tStack_7c.right - tStack_7c.left) - iVar2) + 1) / 2,
           (((tStack_7c.bottom - tStack_7c.top) - iVar3) + 1) / 2,*(HICON *)(param_1 + 0x98));
  Ordinal_1386();
  FUN_0041d025(uStack_10 ^ (int)register0x00000010 - 0x80U);
  return;
}

