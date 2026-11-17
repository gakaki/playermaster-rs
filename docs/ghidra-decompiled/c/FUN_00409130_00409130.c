
undefined4 __thiscall FUN_00409130(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((0xc < param_1) || (*(int *)((int)this + 0x98) == 0)) {
    return 0;
  }
  uVar4 = 0;
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x98) + iVar2;
    if (((uVar3 != param_1) && (iVar1 != 0)) && (*(int *)(iVar1 + 4) == 1)) {
      *(undefined4 *)(iVar1 + 4) = 0;
      uVar4 = 1;
    }
    iVar2 = iVar2 + 0x68;
    uVar3 = uVar3 + 1;
  } while (iVar2 < 0x548);
  iVar1 = param_1 * 0x68 + *(int *)((int)this + 0x98);
  iVar2 = *(int *)(iVar1 + 4);
  if (((iVar2 != 2) && (iVar2 != 3)) && (iVar2 != 1)) {
    *(undefined4 *)(iVar1 + 4) = 1;
    uVar4 = 1;
  }
  return uVar4;
}

