
void Unwind_00445b40(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x224) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x224) = *(uint *)(unaff_EBP + -0x224) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00445b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1042();
  return;
}

