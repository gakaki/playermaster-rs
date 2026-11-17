
undefined4 __fastcall FUN_00402390(int param_1,int param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int *piVar8;
  
  *(char *)(param_1 + 0x1f2c + *(int *)(param_1 + 0x1af2c)) = (char)param_3;
  *(int *)(param_1 + 0x1af2c) = *(int *)(param_1 + 0x1af2c) + 1;
  if (param_2 == 0) {
    psVar2 = (short *)(param_1 + 0x14 + param_3 * 4);
    *psVar2 = *psVar2 + 1;
    goto LAB_00402457;
  }
  iVar7 = param_2 + -1;
  if (((ushort)iVar7 < 0x7efa) && ((ushort)param_3 < 0x100)) {
    if (iVar7 < 0x100) {
      bVar4 = *(byte *)(param_1 + 0x1c3d + iVar7);
    }
    else {
      bVar4 = *(byte *)((iVar7 >> 7) + 0x1d3d + param_1);
    }
    if (0x1d < bVar4) goto LAB_004023f5;
  }
  else {
LAB_004023f5:
    *(char **)(param_1 + 0x6afa4) = "ct_tally: bad match";
  }
  psVar2 = (short *)(param_1 + 0x418 + (uint)*(byte *)(param_1 + 0x1b3d + param_3) * 4);
  *psVar2 = *psVar2 + 1;
  if (iVar7 < 0x100) {
    bVar4 = *(byte *)(param_1 + 0x1c3d + iVar7);
  }
  else {
    bVar4 = *(byte *)((iVar7 >> 7) + 0x1d3d + param_1);
  }
  psVar2 = (short *)(param_1 + 0x908 + (uint)bVar4 * 4);
  *psVar2 = *psVar2 + 1;
  *(ushort *)(param_1 + 0x9f2c + *(int *)(param_1 + 0x1af30) * 2) = (ushort)iVar7;
  *(int *)(param_1 + 0x1af30) = *(int *)(param_1 + 0x1af30) + 1;
  *(byte *)(param_1 + 0x1af38) = *(byte *)(param_1 + 0x1af38) | *(byte *)(param_1 + 0x1af39);
LAB_00402457:
  *(char *)(param_1 + 0x1af39) = *(char *)(param_1 + 0x1af39) << 1;
  if ((*(byte *)(param_1 + 0x1af2c) & 7) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1af34) + 0x19f2c + param_1) =
         *(undefined1 *)(param_1 + 0x1af38);
    *(int *)(param_1 + 0x1af34) = *(int *)(param_1 + 0x1af34) + 1;
    *(undefined2 *)(param_1 + 0x1af38) = 0x100;
  }
  if ((2 < *(int *)(param_1 + 4)) && ((*(uint *)(param_1 + 0x1af2c) & 0xfff) == 0)) {
    iVar7 = *(uint *)(param_1 + 0x1af2c) * 8;
    param_3 = 0;
    piVar8 = &DAT_0044cf34;
    iVar5 = 0;
    puVar6 = (ushort *)(param_1 + 0x90c);
    do {
      iVar7 = iVar7 + (uint)puVar6[-2] * (piVar8[-1] + 5);
      iVar3 = *piVar8;
      piVar1 = piVar8 + 1;
      piVar8 = piVar8 + 3;
      param_3 = param_3 + (iVar3 + 5) * (uint)*puVar6;
      iVar5 = iVar5 + (uint)puVar6[2] * (*piVar1 + 5);
      puVar6 = puVar6 + 6;
    } while ((int)piVar8 < 0x44cfac);
    if ((*(uint *)(param_1 + 0x1af30) < *(uint *)(param_1 + 0x1af2c) >> 1) &&
       (((uint)(iVar7 + param_3 + iVar5) >> 2 & 0x3ffffffe) <
        (*(int *)(param_1 + 0x6af84) - *(int *)(param_1 + 0x6af74) & 0xfffffffeU))) {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 0x1af2c) == 0x7fff) || (*(int *)(param_1 + 0x1af30) == 0x8000)) {
    return 1;
  }
  return 0;
}

