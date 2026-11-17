
void FUN_0040c8b0(void)

{
  if ((DAT_00464e48 == 0) || (*(int **)(DAT_00464e48 + 8) == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c8c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x6c))();
  return;
}

