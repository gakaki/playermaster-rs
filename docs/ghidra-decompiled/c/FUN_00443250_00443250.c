
int __fastcall FUN_00443250(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint3 uVar4;
  uint3 extraout_var;
  
  pcVar3 = *(code **)(*(int *)(param_1 + -0x14) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(int *)(param_1 + -0x14));
  }
  piVar1 = (int *)(param_1 + -8);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar4 = (uint3)((uint)piVar1 >> 8);
  if (iVar2 != 1) {
    return (uint)uVar4 << 8;
  }
  if (param_1 + -0x18 != 0) {
    FUN_0043b390(param_1 + -0x10);
    Ordinal_1508(param_1 + -0x18);
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,1);
}

