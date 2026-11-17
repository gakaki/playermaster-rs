
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004053c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int aiStack_a4 [2];
  undefined1 local_4c [12];
  CCustomDrawData *local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  CCustomDrawData *local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004459d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar7 = *(int *)(param_1 + 0xac);
  iVar6 = *(int *)(param_1 + 0xb0);
  iVar1 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  local_14 = param_1;
  local_40 = (CCustomDrawData *)Ordinal_1506();
  local_8 = 0;
  if (local_40 == (CCustomDrawData *)0x0) {
    local_2c = (CCustomDrawData *)0x0;
  }
  else {
    local_2c = (CCustomDrawData *)CCustomDrawData::CCustomDrawData(local_40,0);
  }
  local_8 = 0xffffffff;
  local_28 = GetDpi();
  local_3c = (int)(local_28 * _DAT_0044fee4);
  local_28 = GetDpi();
  iVar4 = (int)(local_28 * _DAT_0044fef0);
  local_18 = iVar4;
  local_28 = GetDpi();
  local_1c = (int)(local_28 * _DAT_0044fee4);
  local_28 = GetDpi();
  local_38 = (float)(int)(local_28 * _DAT_0044fed0);
  GetDpi();
  local_28 = GetDpi();
  local_20 = (int)(local_28 * _DAT_0044fed0);
  GetDpi();
  local_28 = GetDpi();
  local_24 = (int)(local_28 * _DAT_0044ff10);
  local_28 = GetDpi();
  local_40 = (CCustomDrawData *)(int)(local_28 * _DAT_0044ff14);
  fVar9 = GetDpi();
  local_28 = (float)((((iVar2 - iVar6) - (int)(fVar9 * _DAT_0044fef0)) - iVar4) / 2 + iVar6 + iVar4)
  ;
  iVar6 = (iVar1 - iVar7 >> 0x1f & 3U) + (iVar1 - iVar7);
  iVar5 = iVar6 >> 2;
  local_34 = iVar5;
  Ordinal_286();
  iVar4 = local_14;
  (**(code **)**(undefined4 **)(local_14 + 0x98))();
  *(undefined4 *)(*(int *)(iVar4 + 0x15c) + 0x3c) = 0x40024;
  aiStack_a4[1] = 0x4055aa;
  FUN_00405b80(*(void **)(iVar4 + 0x160),&local_30);
  iVar4 = local_24;
  local_8 = 1;
  aiStack_a4[0] = local_24 / 2;
  iVar8 = (int)local_28 - aiStack_a4[0];
  local_18 = ((iVar5 - (iVar6 >> 0x1f) >> 1) - aiStack_a4[0]) + iVar7;
  aiStack_a4[1] = 0x25;
  iVar6 = local_18 + local_24;
  FUN_00405ae0(aiStack_a4,&local_30,L"MainLable\\about_logo.png");
  iVar5 = local_14;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x70))
            (8,*(undefined4 *)(local_14 + 0x15c),1,local_18,iVar8,iVar6 - local_18,iVar4);
  local_18 = local_34 + iVar7 + (int)local_38;
  iVar6 = ((local_1c * -2 - local_20 / 2) - local_20) + (int)local_28;
  iVar7 = iVar6 + local_1c;
  iVar4 = iVar1 - local_18;
  (**(code **)(**(int **)(iVar5 + 0x98) + 0x3c))
            (*(undefined4 *)(local_14 + 0x15c),2,local_18,iVar6,iVar4,iVar7 - iVar6,0,0x24,0,1);
  iVar6 = local_14;
  iVar7 = local_20 + iVar7;
  iVar5 = local_1c + iVar7;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x3c))
            (*(undefined4 *)(local_14 + 0x15c),3,local_18,iVar7,iVar4,iVar5 - iVar7,0,0x24,0,1);
  Ordinal_280(*(int *)(iVar6 + 0x15c) + 0x348,extraout_ECX,iVar6);
  piVar3 = (int *)CCustomDrawData::CalculateTextCSize
                            (local_2c,local_4c,*(undefined4 *)(iVar6 + 0x1e4));
  iVar5 = local_20 + iVar5;
  if (*piVar3 < iVar4) {
    local_24 = local_1c + iVar5;
    iVar7 = iVar1;
  }
  else {
    local_24 = iVar5 + local_1c * 2;
    local_38 = GetDpi();
    iVar7 = iVar1 - (int)(local_38 * _DAT_0044fed8);
  }
  iVar4 = local_14;
  iVar7 = iVar7 - local_18;
  (**(code **)(**(int **)(local_14 + 0x98) + 0x3c))
            (*(undefined4 *)(local_14 + 0x15c),4,local_18,iVar5,iVar7,local_24 - iVar5,0,4,0,1);
  (**(code **)(**(int **)(iVar4 + 0x98) + 0x48))
            (*(undefined4 *)(iVar4 + 0x15c),5,local_18,local_24 + local_20,iVar7,local_1c,0,0x24);
  iVar6 = local_3c;
  local_2c = (CCustomDrawData *)((iVar1 + local_3c * -2) - (int)local_40);
  iVar7 = (int)local_2c + (int)local_40;
  fVar9 = GetDpi();
  local_40 = (CCustomDrawData *)(((iVar2 - (int)(fVar9 * _DAT_0044ff4c)) - local_1c) - iVar6);
  iVar6 = (int)local_40 + local_1c;
  Ordinal_286(L"ImageButton\\blue\\",local_40,0xffffff,0,8);
  (**(code **)(**(int **)(iVar4 + 0x98) + 0x2c))
            (*(undefined4 *)(iVar4 + 0x15c),6,local_2c,local_40,iVar7 - (int)local_2c,
             iVar6 - (int)local_40);
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

