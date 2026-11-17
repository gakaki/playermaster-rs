
void __fastcall FUN_00402ec0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  pcVar5 = (char *)0x0;
  param_1[0x1abe0] = 2;
  iVar1 = param_1[0x1abe4];
  do {
    if (iVar1 == 0) {
      iVar1 = param_1[0x1abdd];
      if (iVar1 < 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)((int)param_1 + iVar1 + 0x1af70);
      }
      FUN_004021e0(param_1,pvVar3,param_1[0x1abe1] - iVar1,1);
      return;
    }
    if (2 < (uint)param_1[0x1abe4]) {
      uVar4 = ((uint)*(byte *)(param_1[0x1abe1] + 0x1af72 + (int)param_1) ^ param_1[0x1abdf] << 5) &
              0x7fff;
      param_1[0x1abdf] = uVar4;
      uVar4 = param_1[uVar4 + 0x12bdc];
      param_1[(param_1[0x1abe1] & 0x7fff) + 0xabdc] = uVar4;
      param_1[param_1[0x1abdf] + 0x12bdc] = param_1[0x1abe1];
    }
    if ((uVar4 != 0) && (param_1[0x1abe1] - uVar4 < 0x7efb)) {
      if ((uint)param_1[0x1abe4] < (uint)param_1[0x1abe8]) {
        param_1[0x1abe8] = param_1[0x1abe4];
      }
      pcVar5 = FUN_00402ba0((int)param_1,uVar4);
      if ((char *)param_1[0x1abe4] < pcVar5) {
        pcVar5 = (char *)param_1[0x1abe4];
      }
    }
    if (pcVar5 < (char *)0x3) {
      iVar1 = FUN_00402390((int)param_1,0,(uint)*(byte *)(param_1[0x1abe1] + 0x1af70 + (int)param_1)
                          );
      param_1[0x1abe4] = param_1[0x1abe4] + -1;
LAB_00403065:
      param_1[0x1abe1] = param_1[0x1abe1] + 1;
    }
    else {
      iVar1 = FUN_00402390((int)param_1,param_1[0x1abe1] - param_1[0x1abe2],(int)(pcVar5 + -3));
      param_1[0x1abe4] = param_1[0x1abe4] - (int)pcVar5;
      if ((pcVar5 <= (char *)param_1[0x1abe6]) && (2 < (uint)param_1[0x1abe4])) {
        pcVar5 = pcVar5 + -1;
        do {
          param_1[0x1abe1] = param_1[0x1abe1] + 1;
          uVar4 = ((uint)*(byte *)((int)param_1 + param_1[0x1abe1] + 0x1af72) ^
                  param_1[0x1abdf] << 5) & 0x7fff;
          param_1[0x1abdf] = uVar4;
          uVar4 = param_1[uVar4 + 0x12bdc];
          param_1[(param_1[0x1abe1] & 0x7fff) + 0xabdc] = uVar4;
          param_1[param_1[0x1abdf] + 0x12bdc] = param_1[0x1abe1];
          pcVar5 = pcVar5 + -1;
        } while (pcVar5 != (char *)0x0);
        pcVar5 = (char *)0x0;
        goto LAB_00403065;
      }
      param_1[0x1abe1] = pcVar5 + param_1[0x1abe1];
      pcVar5 = (char *)0x0;
      uVar2 = (uint)*(byte *)(param_1[0x1abe1] + 0x1af70 + (int)param_1);
      param_1[0x1abdf] = uVar2;
      param_1[0x1abdf] = (uint)*(byte *)(param_1[0x1abe1] + 0x1af71 + (int)param_1) ^ uVar2 << 5;
    }
    if (iVar1 != 0) {
      iVar1 = param_1[0x1abdd];
      if (iVar1 < 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = (void *)((int)param_1 + iVar1 + 0x1af70);
      }
      FUN_004021e0(param_1,pvVar3,param_1[0x1abe1] - iVar1,0);
      param_1[0x1abdd] = param_1[0x1abe1];
    }
    if ((uint)param_1[0x1abe4] < 0x106) {
      FUN_00402d60((int)param_1);
    }
    iVar1 = param_1[0x1abe4];
  } while( true );
}

