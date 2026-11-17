
void __thiscall FUN_00409670(void *this,int param_1,undefined4 *param_2,int param_3)

{
  HGDIOBJ pvVar1;
  HBRUSH hbr;
  RECT local_1c;
  uint local_c;
  undefined1 auStack_8 [4];
  
  local_c = DAT_0046400c ^ (uint)(auStack_8 + 4);
  if (*(int *)(param_1 + 0x54) != 0) {
    SetBkMode((HDC)*param_2,1);
    SetTextColor((HDC)*param_2,0);
    pvVar1 = (HGDIOBJ)0x0;
    if (*(int *)(param_1 + 0x54) != 0) {
      pvVar1 = *(HGDIOBJ *)(*(int *)(param_1 + 0x54) + 4);
    }
    pvVar1 = SelectObject((HDC)*param_2,pvVar1);
    if ((param_3 != 0) &&
       (((*(int *)(param_1 + 4) == 1 || (*(int *)(param_1 + 4) == 2)) ||
        (*(int *)(param_1 + 8) != 0)))) {
      SetTextColor((HDC)*param_2,0xff0000);
      if (*(int *)(param_1 + 8) != 0) {
        local_1c.left = *(int *)(param_1 + 0xc) + 2;
        local_1c.bottom = *(int *)(param_1 + 0x18);
        local_1c.top = local_1c.bottom - *(int *)((int)this + 0xc);
        local_1c.right = *(LONG *)(param_1 + 0x14);
        hbr = CreateSolidBrush(0xff0000);
        FillRect((HDC)*param_2,&local_1c,hbr);
        DeleteObject(hbr);
      }
    }
    DrawTextW((HDC)*param_2,*(LPCWSTR *)(param_1 + 0x28),-1,(LPRECT)(param_1 + 0xc),
              *(uint *)(param_1 + 100) | 0x800);
    SelectObject((HDC)*param_2,pvVar1);
  }
  FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
  return;
}

