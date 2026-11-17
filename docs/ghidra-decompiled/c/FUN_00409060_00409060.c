
int __fastcall FUN_00409060(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    iVar1 = 0xc;
    iVar2 = *(int *)(param_1 + 0x98) + 0x4e0;
    do {
      if ((((iVar1 != 3) && (iVar1 != 5)) && (iVar1 != 6)) &&
         (((iVar1 != 4 && (iVar2 != 0)) && (*(int *)(iVar2 + 4) == 2)))) {
        return iVar1;
      }
      iVar2 = iVar2 + -0x68;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return -1;
}

