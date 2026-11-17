
undefined4 FUN_0040c830(void)

{
  undefined4 uVar1;
  
  if ((DAT_00464e48 == 0) || (*(int **)(DAT_00464e48 + 0xc) == (int *)0x0)) {
    return 0x80004005;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x48))();
  return uVar1;
}

