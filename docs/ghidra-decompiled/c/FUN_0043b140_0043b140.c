
undefined4 __fastcall FUN_0043b140(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*(int *)(param_1[2] + 4 + *(int *)(*(int *)(param_1[2] + 4) + 4)) + 4))();
  piVar1 = param_1 + 0xc;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    uVar3 = (**(code **)(*param_1 + 0x10))(1);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return (uint)piVar1 & 0xffffff00;
}

