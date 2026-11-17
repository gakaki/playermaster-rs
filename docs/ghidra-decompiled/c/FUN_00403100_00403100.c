
void __fastcall FUN_00403100(undefined4 *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  char *pcVar10;
  
  uVar9 = 0;
  bVar6 = false;
  pcVar10 = (char *)0x2;
  if ((int)param_1[1] < 4) {
    FUN_00402ec0(param_1);
    return;
  }
  if (param_1[0x1abe4] != 0) {
    do {
      if (2 < (uint)param_1[0x1abe4]) {
        uVar9 = ((uint)*(byte *)(param_1[0x1abe1] + 0x1af72 + (int)param_1) ^ param_1[0x1abdf] << 5)
                & 0x7fff;
        param_1[0x1abdf] = uVar9;
        uVar9 = param_1[uVar9 + 0x12bdc];
        param_1[(param_1[0x1abe1] & 0x7fff) + 0xabdc] = uVar9;
        param_1[param_1[0x1abdf] + 0x12bdc] = param_1[0x1abe1];
      }
      iVar7 = param_1[0x1abe2];
      param_1[0x1abe0] = pcVar10;
      pcVar10 = (char *)0x2;
      if (((uVar9 != 0) && ((uint)param_1[0x1abe0] < (uint)param_1[0x1abe6])) &&
         (param_1[0x1abe1] - uVar9 < 0x7efb)) {
        if ((uint)param_1[0x1abe4] < (uint)param_1[0x1abe8]) {
          param_1[0x1abe8] = param_1[0x1abe4];
        }
        pcVar10 = FUN_00402ba0((int)param_1,uVar9);
        if ((char *)param_1[0x1abe4] < pcVar10) {
          pcVar10 = (char *)param_1[0x1abe4];
        }
        if ((pcVar10 == (char *)0x3) && (0x1000 < (uint)(param_1[0x1abe1] - param_1[0x1abe2]))) {
          pcVar10 = (char *)0x2;
        }
      }
      pcVar2 = (char *)param_1[0x1abe0];
      if ((pcVar2 < (char *)0x3) || (pcVar2 < pcVar10)) {
        if (bVar6) {
          iVar7 = FUN_00402390((int)param_1,0,
                               (uint)*(byte *)(param_1[0x1abe1] + 0x1af6f + (int)param_1));
          if (iVar7 != 0) {
            iVar7 = param_1[0x1abdd];
            if (iVar7 < 0) {
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = (void *)((int)param_1 + iVar7 + 0x1af70);
            }
            FUN_004021e0(param_1,pvVar8,param_1[0x1abe1] - iVar7,0);
            param_1[0x1abdd] = param_1[0x1abe1];
          }
        }
        else {
          bVar6 = true;
        }
        param_1[0x1abe1] = param_1[0x1abe1] + 1;
        param_1[0x1abe4] = param_1[0x1abe4] + -1;
      }
      else {
        iVar3 = param_1[0x1abe4];
        iVar4 = param_1[0x1abe1];
        iVar7 = FUN_00402390((int)param_1,(iVar4 - iVar7) + -1,(int)(pcVar2 + -3));
        param_1[0x1abe4] = param_1[0x1abe4] + (1 - param_1[0x1abe0]);
        param_1[0x1abe0] = param_1[0x1abe0] + -2;
        do {
          param_1[0x1abe1] = param_1[0x1abe1] + 1;
          uVar5 = param_1[0x1abe1];
          if (uVar5 <= (uint)(iVar3 + -3 + iVar4)) {
            uVar9 = ((uint)*(byte *)(uVar5 + 0x1af72 + (int)param_1) ^ param_1[0x1abdf] << 5) &
                    0x7fff;
            param_1[0x1abdf] = uVar9;
            uVar9 = param_1[uVar9 + 0x12bdc];
            param_1[(uVar5 & 0x7fff) + 0xabdc] = uVar9;
            param_1[param_1[0x1abdf] + 0x12bdc] = param_1[0x1abe1];
          }
          piVar1 = param_1 + 0x1abe0;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        param_1[0x1abe1] = param_1[0x1abe1] + 1;
        pcVar10 = (char *)0x2;
        bVar6 = false;
        if (iVar7 != 0) {
          iVar7 = param_1[0x1abdd];
          if (iVar7 < 0) {
            pvVar8 = (void *)0x0;
          }
          else {
            pvVar8 = (void *)((int)param_1 + iVar7 + 0x1af70);
          }
          FUN_004021e0(param_1,pvVar8,param_1[0x1abe1] - iVar7,0);
          param_1[0x1abdd] = param_1[0x1abe1];
        }
      }
      if ((uint)param_1[0x1abe4] < 0x106) {
        FUN_00402d60((int)param_1);
      }
    } while (param_1[0x1abe4] != 0);
    if (bVar6) {
      FUN_00402390((int)param_1,0,(uint)*(byte *)(param_1[0x1abe1] + 0x1af6f + (int)param_1));
    }
  }
  iVar7 = param_1[0x1abdd];
  if (iVar7 < 0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)((int)param_1 + iVar7 + 0x1af70);
  }
  FUN_004021e0(param_1,pvVar8,param_1[0x1abe1] - iVar7,1);
  return;
}

