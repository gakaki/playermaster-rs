
void __fastcall FUN_004018f0(int param_1,int *param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  short *psVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  int local_2c;
  int *local_28;
  int local_14;
  
  iVar15 = param_2[2];
  iVar12 = param_2[3];
  iVar7 = param_2[6];
  iVar13 = param_2[5];
  iVar8 = *param_2;
  iVar9 = param_2[1];
  *(undefined4 *)(param_1 + 0xfe4) = 0;
  *(undefined4 *)(param_1 + 0xfe8) = 0;
  *(undefined4 *)(param_1 + 0xfec) = 0;
  *(undefined4 *)(param_1 + 0xff0) = 0;
  *(undefined4 *)(param_1 + 0xff4) = 0;
  *(undefined4 *)(param_1 + 0xff8) = 0;
  *(undefined4 *)(param_1 + 0xffc) = 0;
  *(undefined4 *)(param_1 + 0x1000) = 0;
  local_14 = 0;
  *(undefined2 *)(iVar8 + 2 + *(int *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18fc) * 4) * 4) = 0;
  iVar17 = *(int *)(param_1 + 0x18fc) + 1;
  if (iVar17 < 0x23d) {
    local_28 = (int *)(param_1 + 0x1004 + iVar17 * 4);
    local_2c = 0x23d - iVar17;
    iVar17 = iVar17 + local_2c;
    iVar18 = 0;
    do {
      iVar14 = *local_28;
      iVar3 = iVar14 * 4;
      iVar11 = *(ushort *)(iVar8 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar8) * 4) + 1;
      if (iVar13 < iVar11) {
        iVar18 = iVar18 + 1;
        iVar11 = iVar13;
        local_14 = iVar18;
      }
      *(short *)(iVar3 + 2 + iVar8) = (short)iVar11;
      if (iVar14 <= iVar7) {
        psVar4 = (short *)(param_1 + 0xfe4 + iVar11 * 2);
        *psVar4 = *psVar4 + 1;
        if (iVar14 < iVar12) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(int *)(iVar15 + (iVar14 - iVar12) * 4);
        }
        uVar5 = *(ushort *)(iVar3 + iVar8);
        *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + (iVar14 + iVar11) * (uint)uVar5;
        iVar18 = local_14;
        if (iVar9 != 0) {
          *(int *)(param_1 + 0x1af40) =
               *(int *)(param_1 + 0x1af40) +
               ((uint)*(ushort *)(iVar3 + 2 + iVar9) + iVar14) * (uint)uVar5;
        }
      }
      local_28 = local_28 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    if (iVar18 != 0) {
      iVar15 = iVar13 + -1;
      puVar16 = (ushort *)(param_1 + (iVar13 + 0x7f2) * 2);
      do {
        psVar4 = (short *)(param_1 + 0xfe4 + iVar15 * 2);
        sVar6 = *(short *)(param_1 + 0xfe4 + iVar15 * 2);
        iVar12 = iVar15;
        while (sVar6 == 0) {
          psVar4 = psVar4 + -1;
          iVar12 = iVar12 + -1;
          sVar6 = *psVar4;
        }
        psVar4 = (short *)(param_1 + 0xfe6 + iVar12 * 2);
        *psVar4 = *psVar4 + 2;
        psVar4 = (short *)(param_1 + 0xfe4 + iVar12 * 2);
        *psVar4 = *psVar4 + -1;
        local_14 = local_14 + -2;
        *puVar16 = *puVar16 - 1;
      } while (0 < local_14);
      for (; iVar13 != 0; iVar13 = iVar13 + -1) {
        uVar10 = (uint)*puVar16;
        if (uVar10 != 0) {
          iVar15 = param_1 + 0x1004 + iVar17 * 4;
          do {
            piVar1 = (int *)(iVar15 + -4);
            iVar15 = iVar15 + -4;
            iVar17 = iVar17 + -1;
            if (*piVar1 <= iVar7) {
              puVar2 = (ushort *)(iVar8 + *piVar1 * 4);
              if (puVar2[1] != (ushort)iVar13) {
                *(int *)(param_1 + 0x1af3c) =
                     *(int *)(param_1 + 0x1af3c) + (iVar13 - (uint)puVar2[1]) * (uint)*puVar2;
                puVar2[1] = (ushort)iVar13;
              }
              uVar10 = uVar10 - 1;
            }
          } while (uVar10 != 0);
        }
        puVar16 = puVar16 + -1;
      }
    }
  }
  return;
}

