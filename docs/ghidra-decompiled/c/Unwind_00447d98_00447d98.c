
void Unwind_00447d98(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) == 0) {
    return;
  }
  *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
  FUN_0040b900(*(int **)(unaff_EBP + 8));
  return;
}

