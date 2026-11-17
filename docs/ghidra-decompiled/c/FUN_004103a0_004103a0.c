
undefined4 FUN_004103a0(void)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)Ordinal_2214();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004103ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar1 + 0x7c))();
  return uVar2;
}

