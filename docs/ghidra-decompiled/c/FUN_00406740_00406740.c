
undefined4 __fastcall FUN_00406740(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x98) + 0x430) = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x98) + 0x498) = 1;
  return 1;
}

