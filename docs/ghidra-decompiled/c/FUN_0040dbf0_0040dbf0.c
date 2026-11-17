
undefined4 FUN_0040dbf0(void)

{
  int iVar1;
  
  iVar1 = DAT_00464e48;
  if (DAT_00464e48 != 0) {
    if (*(int **)(DAT_00464e48 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x60))();
    }
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 0x60))();
    }
  }
  return 0;
}

