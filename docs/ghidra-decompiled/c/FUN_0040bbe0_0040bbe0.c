
undefined1 * FUN_0040bbe0(undefined1 *param_1,int param_2)

{
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040bdf0(param_1,(int *)"iostream stream error",0x15);
    return param_1;
  }
  FUN_0040bb60(param_1,param_2);
  return param_1;
}

