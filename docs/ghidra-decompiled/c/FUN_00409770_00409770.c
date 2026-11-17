
void FUN_00409770(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 < 4) {
    if (*(int *)(param_1 + 0x44 + iVar2 * 4) != 0) {
      local_14 = *(int *)(param_1 + 0xc);
      iStack_10 = *(int *)(param_1 + 0x10);
      iStack_c = *(int *)(param_1 + 0x14);
      iStack_8 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        local_14 = *(int *)(param_1 + 0xc);
        iStack_10 = *(int *)(param_1 + 0x10);
        iStack_c = *(int *)(param_1 + 0x14);
        iStack_8 = *(int *)(param_1 + 0x18);
      }
      iVar1 = GdipDrawImageRect(*param_2,*(undefined4 *)(*(int *)(param_1 + 0x44 + iVar2 * 4) + 4),
                                (float)local_14,(float)iStack_10,(float)(iStack_c - local_14),
                                (float)(iStack_8 - iStack_10));
      if (iVar1 != 0) {
        param_2[1] = iVar1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x30 + iVar2 * 4);
    if (iVar2 != 0) {
      iVar2 = GdipDrawImageRect(*param_2,*(undefined4 *)(iVar2 + 4),(float)*(int *)(param_1 + 0xc),
                                (float)*(int *)(param_1 + 0x10),
                                (float)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)),
                                (float)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)));
      if (iVar2 != 0) {
        param_2[1] = iVar2;
      }
    }
  }
  return;
}

