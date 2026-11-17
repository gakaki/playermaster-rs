
void __fastcall FUN_00401b00(int param_1,int param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort auStack_28 [16];
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (uint)(auStack_28 + 0x12);
  uVar9 = 0;
  iVar8 = 1;
  psVar6 = (short *)(param_1 + 0xfe4);
  do {
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    uVar2 = (sVar1 + (short)uVar9) * 2;
    uVar9 = (uint)uVar2;
    auStack_28[iVar8] = uVar2;
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  if ((*(ushort *)(param_1 + 0x1002) - 1) + uVar9 != 0x7fff) {
    *(char **)(param_1 + 0x6afa4) = "inconsistent bit counts";
  }
  iVar8 = 0;
  if (-1 < param_3) {
    do {
      uVar9 = (uint)*(ushort *)(param_2 + 2 + iVar8 * 4);
      if (uVar9 != 0) {
        uVar4 = (uint)auStack_28[uVar9];
        auStack_28[uVar9] = auStack_28[uVar9] + 1;
        uVar3 = 0;
        do {
          uVar5 = uVar3;
          uVar9 = uVar9 - 1;
          uVar7 = uVar4 & 1;
          uVar4 = uVar4 >> 1;
          uVar3 = (uVar5 | uVar7) * 2;
        } while (0 < (int)uVar9);
        *(ushort *)(param_2 + iVar8 * 4) = (ushort)uVar5 | (ushort)uVar7;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= param_3);
  }
  FUN_0041d025(local_8 ^ (uint)(auStack_28 + 0x12));
  return;
}

