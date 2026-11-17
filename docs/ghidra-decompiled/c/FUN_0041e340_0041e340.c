
undefined4 __cdecl FUN_0041e340(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447738;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar2 = (byte *)cef_api_hash(0,DAT_0046400c ^ (int)register0x00000010 - 4U);
  pbVar5 = &DAT_0044abdc;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_0041e3a1:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_0041e3a6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_0041e3a1;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_0041e3a6:
  if (uVar3 == 0) {
    if (param_1 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1 + 4;
    }
    iVar9 = param_2;
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                (param_2,param_3);
    }
    puVar4 = FUN_0041e840(iVar9);
    uVar6 = cef_execute_process(iVar7,puVar4);
  }
  else {
    uVar6 = 0;
  }
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar6;
}

