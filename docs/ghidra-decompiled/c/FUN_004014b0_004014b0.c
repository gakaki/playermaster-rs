
void __fastcall FUN_004014b0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort *local_8;
  
  *(undefined4 *)(param_1 + 0x1af50) = param_2;
  *(undefined4 *)(param_1 + 0x1af48) = 0;
  *(undefined4 *)(param_1 + 0x1af44) = 0;
  *(undefined4 *)(param_1 + 0x1af4c) = 0;
  if (*(short *)(param_1 + 0xe7e) == 0) {
    local_8 = (ushort *)(param_1 + 0x1e40);
    iVar8 = 0;
    iVar5 = 0;
    do {
      *(int *)local_8 = iVar8;
      iVar6 = 0;
      if (0 < 1 << ((byte)(&DAT_0044cfb0)[iVar5] & 0x1f)) {
        do {
          *(char *)(param_1 + 0x1b3d + iVar8) = (char)iVar5;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar6 < 1 << ((byte)(&DAT_0044cfb0)[iVar5] & 0x1f));
      }
      iVar5 = iVar5 + 1;
      local_8 = (ushort *)((int)local_8 + 4);
    } while (iVar5 < 0x1c);
    if (iVar8 != 0x100) {
      *(char **)(param_1 + 0x6afa4) = "ct_init: length != 256";
    }
    *(char *)(iVar8 + 0x1b3c + param_1) = (char)iVar5;
    local_8 = (ushort *)(param_1 + 0x1eb4);
    iVar8 = 0;
    iVar5 = 0;
    do {
      *(int *)local_8 = iVar8;
      iVar6 = 0;
      if (0 < 1 << ((byte)(&DAT_0044cf30)[iVar5] & 0x1f)) {
        do {
          *(char *)(param_1 + 0x1c3d + iVar8) = (char)iVar5;
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar6 < 1 << ((byte)(&DAT_0044cf30)[iVar5] & 0x1f));
      }
      iVar5 = iVar5 + 1;
      local_8 = (ushort *)((int)local_8 + 4);
    } while (iVar5 < 0x10);
    if (iVar8 != 0x100) {
      *(char **)(param_1 + 0x6afa4) = "ct_init: dist != 256";
    }
    iVar8 = iVar8 >> 7;
    if (iVar5 < 0x1e) {
      local_8 = (ushort *)(param_1 + 0x1eb4 + iVar5 * 4);
      do {
        iVar6 = 0;
        *(int *)local_8 = iVar8 << 7;
        if (0 < 1 << ((char)(&DAT_0044cf30)[iVar5] - 7U & 0x1f)) {
          do {
            *(char *)(param_1 + 0x1d3d + iVar8) = (char)iVar5;
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + 1;
          } while (iVar6 < 1 << ((char)(&DAT_0044cf30)[iVar5] - 7U & 0x1f));
        }
        iVar5 = iVar5 + 1;
        local_8 = (ushort *)((int)local_8 + 4);
      } while (iVar5 < 0x1e);
    }
    if (iVar8 != 0x100) {
      *(char **)(param_1 + 0x6afa4) = "ct_init: 256+dist != 512";
    }
    *(undefined4 *)(param_1 + 0xfe4) = 0;
    *(undefined4 *)(param_1 + 0xfe8) = 0;
    *(undefined4 *)(param_1 + 0xfec) = 0;
    *(undefined4 *)(param_1 + 0xff0) = 0;
    iVar5 = 0x18;
    *(undefined4 *)(param_1 + 0xff4) = 0;
    *(undefined4 *)(param_1 + 0xff8) = 0;
    *(undefined4 *)(param_1 + 0xffc) = 0;
    *(undefined4 *)(param_1 + 0x1000) = 0;
    puVar2 = (undefined2 *)(param_1 + 0xa02);
    do {
      puVar2[-2] = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      *puVar2 = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      puVar2[2] = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      puVar2[4] = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      puVar2[6] = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      puVar2[8] = 8;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 0xc;
    } while (iVar5 != 0);
    puVar2 = (undefined2 *)(param_1 + 0xc3e);
    iVar5 = 0x70;
    do {
      *puVar2 = 9;
      puVar2 = puVar2 + 2;
      *(short *)(param_1 + 0xff6) = *(short *)(param_1 + 0xff6) + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar2 = (undefined2 *)(param_1 + 0xdfe);
    iVar5 = 0x18;
    do {
      *puVar2 = 7;
      puVar2 = puVar2 + 2;
      *(short *)(param_1 + 0xff2) = *(short *)(param_1 + 0xff2) + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar2 = (undefined2 *)(param_1 + 0xe5e);
    iVar5 = 8;
    do {
      *puVar2 = 8;
      puVar2 = puVar2 + 2;
      *(short *)(param_1 + 0xff4) = *(short *)(param_1 + 0xff4) + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_00401b00(param_1,param_1 + 0x9fc,0x11f);
    local_8 = (ushort *)(param_1 + 0xe7c);
    uVar7 = 0;
    do {
      local_8[1] = 5;
      iVar5 = 5;
      uVar1 = 0;
      uVar9 = uVar7;
      do {
        uVar3 = uVar1;
        iVar5 = iVar5 + -1;
        uVar4 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        uVar1 = (uVar3 | uVar4) * 2;
      } while (0 < iVar5);
      uVar7 = uVar7 + 1;
      *local_8 = (ushort)uVar3 | (ushort)uVar4;
      local_8 = local_8 + 2;
    } while ((int)uVar7 < 0x1e);
    FUN_00401780(param_1);
  }
  return;
}

