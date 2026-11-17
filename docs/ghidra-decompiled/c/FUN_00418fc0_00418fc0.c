
void __fastcall FUN_00418fc0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if (iVar2 == iVar1) {
    param_1[1] = iVar2;
    return;
  }
  do {
    Ordinal_1042();
    Ordinal_1042();
    Ordinal_1042();
    iVar2 = iVar2 + 0xc;
  } while (iVar2 != iVar1);
  param_1[1] = *param_1;
  return;
}

