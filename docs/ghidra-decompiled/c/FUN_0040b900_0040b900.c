
void __fastcall FUN_0040b900(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040b913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 4 + *(int *)(*(int *)(iVar1 + 4) + 4)) + 4))();
  return;
}

