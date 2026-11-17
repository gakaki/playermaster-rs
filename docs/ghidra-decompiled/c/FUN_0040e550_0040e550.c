
void __fastcall FUN_0040e550(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar1 = FUN_004066d0(*(int *)(param_1 + 0xa4));
    if (iVar1 != 0) {
      FUN_0040d3f0(param_1);
      return;
    }
  }
  return;
}

