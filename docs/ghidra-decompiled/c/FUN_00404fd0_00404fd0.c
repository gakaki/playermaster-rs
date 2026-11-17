
int * __fastcall FUN_00404fd0(int *param_1)

{
  if (param_1[0x12] != 0) {
    Ordinal_1508(param_1[0x12]);
  }
  param_1[0x12] = 0;
  if (param_1[0xf] != 0) {
    Ordinal_266(param_1[0xf]);
  }
  param_1[0xf] = 0;
  if (*param_1 != 0) {
    Ordinal_266(*param_1);
  }
  *param_1 = 0;
  Ordinal_1508(param_1);
  return param_1;
}

