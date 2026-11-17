
int __fastcall FUN_0041b070(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    Ordinal_1518(param_1);
    Ordinal_1518(param_1 + 4);
    Ordinal_1518(param_1 + 8);
    param_1 = param_1 + 0xc;
    param_3 = param_3 + 0xc;
  } while (param_1 != param_2);
  return param_3;
}

