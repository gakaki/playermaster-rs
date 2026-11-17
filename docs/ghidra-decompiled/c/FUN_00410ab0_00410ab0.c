
undefined4 FUN_00410ab0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00464e48;
  if (*(int **)(DAT_00464e48 + 0xc) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x54))();
  }
  piVar1 = *(int **)(iVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x50))();
  }
  piVar1 = *(int **)(iVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 0x58))();
  }
  if (((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) {
    return 0;
  }
  return 1;
}

