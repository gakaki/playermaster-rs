
int __fastcall FUN_00437070(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint3 uVar4;
  uint3 extraout_var;
  undefined4 *puVar5;
  
  pcVar3 = *(code **)(param_1[-5] + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[-5]);
  }
  piVar1 = param_1 + -2;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar4 = (uint3)((uint)piVar1 >> 8);
  if (iVar2 != 1) {
    return (uint)uVar4 << 8;
  }
  puVar5 = param_1 + -6;
  if (puVar5 != (undefined4 *)0x0) {
    param_1[-4] = &PTR_LAB_0044bffc;
    *(undefined ***)(*(int *)(param_1[-3] + 4) + 0xc + (int)puVar5) = &PTR_LAB_0044c01c;
    *(int *)(*(int *)(param_1[-3] + 4) + 8 + (int)puVar5) = *(int *)(param_1[-3] + 4) + -0xc;
    param_1[-4] = &PTR_purecall_0044bdb8;
    *(undefined ***)(*(int *)(param_1[-3] + 4) + 0xc + (int)puVar5) = &PTR_LAB_0044bfe8;
    *(int *)(*(int *)(param_1[-3] + 4) + 8 + (int)puVar5) = *(int *)(param_1[-3] + 4) + -0xc;
    *param_1 = CefBaseRefCounted::vftable;
    Ordinal_1508(puVar5);
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,1);
}

