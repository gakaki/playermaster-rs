
void __thiscall FUN_00409550(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  HBRUSH hbr;
  HGDIOBJ h;
  int iVar3;
  HDC hdc;
  int *piVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  HDC local_20;
  RECT local_1c;
  uint local_c;
  undefined1 auStack_8 [4];
  
  local_c = DAT_0046400c ^ (uint)(auStack_8 + 4);
  local_28 = param_1;
  if (param_1 != 0) {
    hdc = (HDC)0x0;
    if (*(int *)((int)this + 8) != 0) {
      hdc = *(HDC *)(*(int *)((int)this + 8) + 4);
    }
    local_24 = 0;
    local_20 = hdc;
    local_2c = GdipCreateFromHDC(hdc,&local_24);
    local_30 = local_24;
    local_1c.right = *(LONG *)(param_1 + 0xc);
    local_1c.bottom = *(LONG *)(param_1 + 4);
    local_1c.left = 0;
    local_1c.top = 0;
    hbr = CreateSolidBrush(*(COLORREF *)(param_1 + 0x1c));
    h = SelectObject(hdc,hbr);
    FillRect(local_20,&local_1c,hbr);
    SelectObject(local_20,h);
    DeleteObject(hbr);
    iVar5 = 0xc;
    piVar2 = *(int **)(local_28 + 0x98);
    do {
      piVar4 = piVar2 + 0x1a;
      iVar3 = 0;
      if (piVar2[0x22] != 0) {
        iVar1 = *piVar4;
        if ((((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) || (iVar1 == 6)) {
          iVar3 = 1;
        }
        if (piVar2[0x25] == 0) {
          FUN_00409670(this,(int)piVar4,&local_20,iVar3);
        }
        else if (piVar2[0x25] == 1) {
          FUN_00409770((int)piVar4,&local_30);
        }
      }
      iVar5 = iVar5 + -1;
      piVar2 = piVar4;
    } while (iVar5 != 0);
    GdipDeleteGraphics(local_30);
  }
  FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
  return;
}

