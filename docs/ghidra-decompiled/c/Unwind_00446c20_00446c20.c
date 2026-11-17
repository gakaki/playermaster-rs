
void Unwind_00446c20(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00446c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_1042();
  return;
}

