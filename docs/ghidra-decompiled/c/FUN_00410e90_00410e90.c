
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00410e90(int param_1)

{
  IDataManager *pIVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_114 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int aiStack_ec [2];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004469eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)(param_1 + 0xac);
  iVar3 = *(int *)(param_1 + 0xb0);
  local_14 = param_1;
  fVar10 = GetDpi();
  fVar10 = fVar10 * _DAT_0044ff04;
  fVar11 = GetDpi();
  fVar11 = fVar11 * _DAT_0044fef0;
  fVar12 = GetDpi();
  local_1c = (int)(fVar12 * _DAT_0044fee4);
  fVar12 = GetDpi();
  fVar12 = fVar12 * _DAT_0044ff18;
  fVar13 = GetDpi();
  local_28 = (int)(fVar13 * _DAT_0044fed8);
  fVar13 = GetDpi();
  fVar13 = fVar13 * _DAT_0044fed8;
  Ordinal_286();
  (**(code **)**(undefined4 **)(param_1 + 0x98))();
  local_24 = iVar4 + (int)fVar10;
  *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x3c) = 0x40024;
  iVar3 = iVar3 + local_1c;
  iVar4 = (int)fVar12 + local_24;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x3c))();
  iVar4 = iVar4 + (int)fVar13;
  local_20 = iVar4;
  fVar10 = GetDpi();
  iVar6 = local_14;
  iVar5 = local_20;
  iVar2 = (iVar4 - (int)(fVar10 * _DAT_0044ff64)) - local_20;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x3c))();
  aiStack_ec[1] = 0x411068;
  FUN_00405b80(*(void **)(iVar6 + 0x160),&local_2c);
  aiStack_ec[1] = 0x25;
  aiStack_ec[0] = local_1c;
  local_8 = 0;
  local_18 = iVar3 + (int)fVar11 + local_1c + local_28;
  iVar3 = local_18 + local_1c;
  iStack_f4 = 0x411097;
  FUN_00405ae0(aiStack_ec,&local_2c,L"DMInformation\\progressEmpty.png");
  local_8._0_1_ = 1;
  iVar4 = **(int **)(iVar6 + 0x98);
  GetDpi();
  iStack_f8 = 0x4110cc;
  iStack_f4 = iVar2;
  fVar10 = GetDpi();
  iStack_f8 = local_18 - (int)(fVar10 * _DAT_0044ff50);
  iStack_fc = iVar5;
  uStack_100 = 4;
  uStack_104 = *(undefined4 *)(iVar6 + 0x15c);
  local_8 = (uint)local_8._1_3_ << 8;
  uStack_108 = 4;
  uStack_10c = 0x4110fe;
  (**(code **)(iVar4 + 0x70))();
  uStack_10c = 0x411104;
  pIVar1 = CommonData_Get();
  uStack_10c = 0x41110b;
  iVar4 = (**(code **)(*(int *)pIVar1 + 0x30))();
  if (iVar4 != 0) {
    uStack_10c = 0x411124;
    dVar7 = DAT_0044fea8;
    FUN_0044580c(*(undefined4 *)(iVar4 + 0x30),*(uint *)(iVar4 + 0x34));
    uStack_10c = 0x411134;
    dVar8 = dVar7;
    FUN_0044580c(*(undefined4 *)(iVar4 + 0x38),*(uint *)(iVar4 + 0x3c));
    dVar9 = dVar7 / dVar8;
    if (DAT_0044fea8 < dVar7 / dVar8) goto LAB_0041114f;
  }
  dVar9 = DAT_0044fea8;
LAB_0041114f:
  uStack_10c = 0;
  uStack_110 = 0x25;
  FUN_00405ae0(auStack_114,&local_2c,L"DMInformation\\progressFull.png");
  local_8._0_1_ = 2;
  iVar5 = (int)((double)iVar2 * dVar9 + (double)iVar5) - iVar5;
  iVar4 = **(int **)(iVar6 + 0x98);
  fVar10 = GetDpi();
  iVar2 = (int)(fVar10 * _DAT_0044fecc);
  fVar10 = GetDpi();
  local_8 = (uint)local_8._1_3_ << 8;
  (**(code **)(iVar4 + 0x70))
            (4,*(undefined4 *)(iVar6 + 0x15c),5,local_20,local_18 - (int)(fVar10 * _DAT_0044ff50),
             iVar5,iVar2);
  iVar5 = (int)fVar12 + local_24;
  (**(code **)(**(int **)(iVar6 + 0x98) + 0x3c))
            (*(undefined4 *)(iVar6 + 0x15c),3,local_24,local_18,iVar5 - local_24,iVar3 - local_18,0,
             0x24,0,1);
  iVar5 = (int)fVar13 + iVar5;
  local_24 = iVar5;
  fVar10 = GetDpi();
  iVar4 = local_14;
  iVar3 = iVar3 + local_28;
  iVar6 = local_1c + iVar3;
  iVar5 = (iVar5 - (int)(fVar10 * _DAT_0044ff64)) - local_24;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x3c))
            (*(undefined4 *)(local_14 + 0x15c),6,local_24,iVar3,iVar5,iVar6 - iVar3,0,0x24,0,1);
  (**(code **)(**(int **)(iVar4 + 0x98) + 0x3c))
            (*(undefined4 *)(local_14 + 0x15c),7,local_24,local_28 + iVar6,iVar5,local_1c,0,0x24,0,1
            );
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

