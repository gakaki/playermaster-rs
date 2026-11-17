
void __fastcall FUN_0040d3f0(int param_1)

{
  int iVar1;
  HDC hDC;
  int iVar2;
  HDC pHVar3;
  HBRUSH hbr;
  HGDIOBJ h;
  undefined1 auStack_38 [4];
  HDC local_34;
  int local_30;
  tagRECT local_2c;
  RECT local_1c;
  uint local_c;
  
  local_c = DAT_0046400c ^ (uint)auStack_38;
  local_30 = param_1;
  if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    pHVar3 = GetWindowDC(*(HWND *)(param_1 + 0x20));
    local_34 = pHVar3;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_2c);
    hbr = CreateSolidBrush(0xf4f4f4);
    h = SelectObject(pHVar3,hbr);
    local_1c.right = local_2c.right - local_2c.left;
    local_1c.bottom = local_2c.bottom - local_2c.top;
    local_1c.left = 0;
    local_1c.top = 0;
    FrameRect(local_34,&local_1c,hbr);
    SelectObject(local_34,h);
    DeleteObject(hbr);
    iVar2 = local_30;
    FUN_00409550(*(void **)(local_30 + 0xa0),*(int *)(local_30 + 0x9c));
    hDC = local_34;
    iVar1 = *(int *)(*(int *)(iVar2 + 0xa0) + 8);
    pHVar3 = (HDC)0x0;
    if (iVar1 != 0) {
      pHVar3 = *(HDC *)(iVar1 + 4);
    }
    BitBlt(local_34,0,0,*(int *)(*(int *)(iVar2 + 0x9c) + 0xc),*(int *)(*(int *)(iVar2 + 0x9c) + 4),
           pHVar3,0,0,0xcc0020);
    ReleaseDC(*(HWND *)(iVar2 + 0x20),hDC);
  }
  FUN_0041d025(local_c ^ (uint)auStack_38);
  return;
}

