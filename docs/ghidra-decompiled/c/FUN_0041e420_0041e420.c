
bool __cdecl FUN_0041e420(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448348;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  pbVar2 = (byte *)cef_api_hash(0,DAT_0046400c ^ (int)register0x00000010 - 4U);
  pbVar6 = &DAT_0044abdc;
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0041e483:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_0041e488;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0041e483;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_0041e488:
  if (uVar3 == 0) {
    if (param_2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_2 + 4;
    }
    if (param_1 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_1 + 4;
    }
    iVar9 = param_3;
    if (param_3 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                (param_3,param_4);
    }
    puVar4 = FUN_0041e840(iVar9);
    iVar5 = cef_initialize(iVar7,iVar5,puVar4);
    bVar8 = iVar5 != 0;
  }
  else {
    bVar8 = false;
  }
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_3 + 4 + *(int *)(*(int *)(param_3 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return bVar8;
}

