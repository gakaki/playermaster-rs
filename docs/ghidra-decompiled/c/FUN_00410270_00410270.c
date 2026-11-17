
void __fastcall FUN_00410270(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00410281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 8))();
  return;
}

