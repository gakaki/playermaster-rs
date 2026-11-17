
undefined4 __fastcall FUN_004047b0(void *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  int local_8;
  
  local_8 = 0;
  pbVar1 = (byte *)((int)param_1 + 0x88);
  pvVar2 = (void *)FUN_00404570(param_1,pbVar1,0x4000);
  while ((pvVar2 != (void *)0x0 && (pvVar2 != (void *)0xffffffff))) {
    pvVar3 = FUN_00404170(param_1,pbVar1,pvVar2);
    if (pvVar3 != pvVar2) {
      return 0x60000;
    }
    local_8 = local_8 + (int)pvVar2;
    pvVar2 = (void *)FUN_00404570(param_1,pbVar1,0x4000);
  }
  *(int *)((int)param_1 + 0x84) = local_8;
  return 0;
}

