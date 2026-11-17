
void Unwind_00445a50(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00445a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1042();
  return;
}

