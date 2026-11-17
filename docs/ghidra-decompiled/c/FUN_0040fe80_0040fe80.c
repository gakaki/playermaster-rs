
void FUN_0040fe80(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 < DAT_00464e78) && (DAT_00464e74 <= param_1)) {
    iVar2 = (int)param_1 - (int)DAT_00464e74;
    if (DAT_00464e78 == DAT_00464e7c) {
      FUN_0040ff00();
    }
    if (DAT_00464e78 == (undefined4 *)0x0) goto LAB_0040fee3;
    uVar1 = DAT_00464e74[iVar2 >> 2];
  }
  else {
    if (DAT_00464e78 == DAT_00464e7c) {
      FUN_0040ff00();
    }
    if (DAT_00464e78 == (undefined4 *)0x0) goto LAB_0040fee3;
    uVar1 = *param_1;
  }
  *DAT_00464e78 = uVar1;
LAB_0040fee3:
  DAT_00464e78 = DAT_00464e78 + 1;
  return;
}

