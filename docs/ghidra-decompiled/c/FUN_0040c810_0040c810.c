
void FUN_0040c810(void)

{
  if (*(int **)(DAT_00464e48 + 0xc) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x44))();
  return;
}

