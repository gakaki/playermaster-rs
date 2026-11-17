
int __fastcall FUN_0040ac10(int param_1)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  uint3 extraout_var;
  
  piVar1 = (int *)(param_1 + -8);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar3 = (uint3)((uint)piVar1 >> 8);
  if (iVar2 != 1) {
    return (uint)uVar3 << 8;
  }
  if (param_1 != 0x18) {
    (**(code **)(*(int *)(param_1 + -0x14 + *(int *)(*(int *)(param_1 + -0x14) + 4)) + 0x10))(1);
    uVar3 = extraout_var;
  }
  return CONCAT31(uVar3,1);
}

