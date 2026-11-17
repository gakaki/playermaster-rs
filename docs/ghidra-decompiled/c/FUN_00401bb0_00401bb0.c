
void __fastcall FUN_00401bb0(int param_1,int *param_2)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int local_10;
  int local_c;
  
  iVar7 = param_2[1];
  iVar3 = *param_2;
  local_c = param_2[4];
  iVar4 = 0;
  iVar5 = -1;
  local_10 = -1;
  *(undefined4 *)(param_1 + 0x18f8) = 0;
  *(undefined4 *)(param_1 + 0x18fc) = 0x23d;
  if (0 < local_c) {
    do {
      if (*(short *)(iVar3 + iVar4 * 4) == 0) {
        *(undefined2 *)(iVar3 + 2 + iVar4 * 4) = 0;
      }
      else {
        *(int *)(param_1 + 0x18f8) = *(int *)(param_1 + 0x18f8) + 1;
        *(int *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18f8) * 4) = iVar4;
        *(undefined1 *)(iVar4 + 0x1900 + param_1) = 0;
        iVar5 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
    local_10 = iVar5;
  }
  if (*(int *)(param_1 + 0x18f8) < 2) {
    do {
      if (local_10 < 2) {
        iVar5 = local_10 + 1;
        local_10 = iVar5;
      }
      else {
        iVar5 = 0;
      }
      *(int *)(param_1 + 0x18f8) = *(int *)(param_1 + 0x18f8) + 1;
      *(int *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18f8) * 4) = iVar5;
      *(undefined2 *)(iVar3 + iVar5 * 4) = 1;
      *(undefined1 *)(param_1 + 0x1900 + iVar5) = 0;
      *(int *)(param_1 + 0x1af3c) = *(int *)(param_1 + 0x1af3c) + -1;
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x1af40) =
             *(int *)(param_1 + 0x1af40) - (uint)*(ushort *)(iVar7 + 2 + iVar5 * 4);
      }
    } while (*(int *)(param_1 + 0x18f8) < 2);
  }
  param_2[6] = local_10;
  for (iVar7 = *(int *)(param_1 + 0x18f8) / 2; 0 < iVar7; iVar7 = iVar7 + -1) {
    FUN_00401810(param_1,iVar3,iVar7);
  }
  do {
    iVar7 = *(int *)(param_1 + 0x1008);
    *(undefined4 *)(param_1 + 0x1008) =
         *(undefined4 *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18f8) * 4);
    *(int *)(param_1 + 0x18f8) = *(int *)(param_1 + 0x18f8) + -1;
    FUN_00401810(param_1,iVar3,1);
    iVar5 = *(int *)(param_1 + 0x1008);
    *(int *)(param_1 + 0x18fc) = *(int *)(param_1 + 0x18fc) + -1;
    psVar1 = (short *)(iVar3 + iVar5 * 4);
    *(int *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18fc) * 4) = iVar7;
    *(int *)(param_1 + 0x18fc) = *(int *)(param_1 + 0x18fc) + -1;
    *(int *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18fc) * 4) = iVar5;
    *(short *)(iVar3 + local_c * 4) = *psVar1 + *(short *)(iVar3 + iVar7 * 4);
    bVar6 = *(byte *)(param_1 + 0x1900 + iVar5);
    bVar2 = *(byte *)(param_1 + 0x1900 + iVar7);
    if (bVar6 <= bVar2) {
      bVar6 = bVar2;
    }
    *(byte *)(param_1 + 0x1900 + local_c) = bVar6 + 1;
    psVar1[1] = (short)local_c;
    *(short *)(iVar3 + 2 + iVar7 * 4) = (short)local_c;
    *(int *)(param_1 + 0x1008) = local_c;
    local_c = local_c + 1;
    FUN_00401810(param_1,iVar3,1);
  } while (1 < *(int *)(param_1 + 0x18f8));
  *(int *)(param_1 + 0x18fc) = *(int *)(param_1 + 0x18fc) + -1;
  *(undefined4 *)(param_1 + 0x1004 + *(int *)(param_1 + 0x18fc) * 4) =
       *(undefined4 *)(param_1 + 0x1008);
  FUN_004018f0(param_1,param_2);
  FUN_00401b00(param_1,iVar3,local_10);
  return;
}

