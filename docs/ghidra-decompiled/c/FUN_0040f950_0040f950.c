
undefined4 __fastcall FUN_0040f950(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_00464e48;
  if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
    iVar3 = (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x68))();
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar2 + 0xc);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
      }
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x3c))(0);
      }
      if ((((DAT_00464e48 != 0) && (iVar2 = *(int *)(DAT_00464e48 + 4), -1 < iVar2)) && (iVar2 < 4))
         && (iVar2 != 0)) {
        *(undefined4 *)(DAT_00464e48 + 4) = 0;
        FUN_00410660();
      }
      FUN_00409260(*(void **)(param_1 + 0x9c),3);
      iVar3 = FUN_004091c0(3,2);
      iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x360) = 0;
      }
      if ((iVar3 != 0) || (iVar2 != 0)) {
        FUN_0040d3f0(param_1);
      }
    }
  }
  return 0;
}

