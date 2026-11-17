
undefined4 __thiscall FUN_0040fdb0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((DAT_00464e48 != 0) && (iVar1 = *(int *)(DAT_00464e48 + 4), -1 < iVar1)) && (iVar1 < 4)) &&
     (iVar1 != 0)) {
    *(undefined4 *)(DAT_00464e48 + 4) = 0;
    FUN_00410660();
  }
  iVar1 = *(int *)((int)this + 0x9c);
  iVar2 = *(int *)(iVar1 + 0x98);
  if (iVar2 != 0) {
    if (iVar2 != -0x1a0) {
      *(undefined4 *)(iVar2 + 0x1a8) = 0;
    }
    if (*(int *)(iVar1 + 0x98) != -0x208) {
      *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x210) = 0;
    }
    if (*(int *)(iVar1 + 0x98) != -0x270) {
      *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x278) = 0;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x98) + 0x140) = 1;
  }
  FUN_004091c0(3,2);
  FUN_00408090(*(void **)((int)this + 0x9c),*(int *)((int)*(void **)((int)this + 0x9c) + 0xc));
  FUN_0040d3f0((int)this);
  if (*(int **)(DAT_00464e48 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x8c))(param_1,param_2);
  }
  return 0;
}

