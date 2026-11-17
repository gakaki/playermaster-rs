
undefined4 FUN_0040c340(void)

{
  undefined4 uVar1;
  
  if ((DAT_00464e48 == 0) || (*(int **)(DAT_00464e48 + 0x10) == (int *)0x0)) {
    return 0x80004005;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(DAT_00464e48 + 0x10) + 0x10))();
  return uVar1;
}

