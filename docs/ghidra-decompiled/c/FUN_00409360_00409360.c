
undefined4 * __fastcall FUN_00409360(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  local_8 = 0;
  iVar2 = GdipCloneImage(*(undefined4 *)(param_1 + 4),&local_8);
  if (iVar2 != 0) {
    *(int *)(param_1 + 8) = iVar2;
  }
  puVar3 = (undefined4 *)GdipAlloc(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  *puVar3 = Gdiplus::Image::vftable;
  puVar3[1] = local_8;
  puVar3[2] = uVar1;
  return puVar3;
}

