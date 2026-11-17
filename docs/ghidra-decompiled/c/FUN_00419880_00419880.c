
void FUN_00419880(void)

{
  int iVar1;
  
  iVar1 = Ordinal_1506(0x20);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0041988f. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(int *)iVar1 = iVar1;
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  if ((int *)(iVar1 + 8) != (int *)0x0) {
    *(int *)(iVar1 + 8) = iVar1;
  }
  *(undefined2 *)(iVar1 + 0xc) = 0x101;
  return;
}

