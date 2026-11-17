
void Unwind_004476b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x58) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x58) = *(uint *)(unaff_EBP + -0x58) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x004476c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1042();
  return;
}

