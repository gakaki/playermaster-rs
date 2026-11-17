
undefined4 __fastcall FUN_004066d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x98);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = 0xc;
    iVar1 = iVar1 + 0x4e0;
    do {
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 1)) {
        if ((iVar2 != -1) && (iVar1 = FUN_004091c0(iVar2,0), iVar1 != 0)) {
          uVar3 = 1;
        }
        break;
      }
      iVar1 = iVar1 + -0x68;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar1 = FUN_00409060(*(int *)(param_1 + 4));
  if ((iVar1 != -1) && (iVar1 = FUN_004091c0(iVar1,0), iVar1 != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

