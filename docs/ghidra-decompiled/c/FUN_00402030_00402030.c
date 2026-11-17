
void __fastcall FUN_00402030(int param_1)

{
  int iVar1;
  
  FUN_00401dd0(param_1,param_1 + 0x14,*(int *)(param_1 + 0xfa8));
  FUN_00401dd0(param_1,param_1 + 0x908,*(int *)(param_1 + 0xfc4));
  FUN_00401bb0(param_1,(int *)(param_1 + 0xfc8));
  iVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xef6 + (uint)(byte)(&DAT_0044cec0)[iVar1] * 4) != 0) {
LAB_004020fa:
      *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + iVar1 * 3 + 0x11;
      return;
    }
    if (*(short *)(param_1 + 0xef6 + (uint)(byte)(&UNK_0044cebf)[iVar1] * 4) != 0) {
      iVar1 = iVar1 + -1;
      goto LAB_004020fa;
    }
    if (*(short *)(param_1 + 0xef6 + (uint)(byte)(&UNK_0044cebe)[iVar1] * 4) != 0) {
      *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + (iVar1 + -2) * 3 + 0x11;
      return;
    }
    if (*(short *)(param_1 + 0xef6 + (uint)(byte)(&UNK_0044cebd)[iVar1] * 4) != 0) {
      *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + (iVar1 + -3) * 3 + 0x11;
      return;
    }
    iVar1 = iVar1 + -4;
    if (iVar1 < 3) {
      *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + iVar1 * 3 + 0x11;
      return;
    }
  } while( true );
}

