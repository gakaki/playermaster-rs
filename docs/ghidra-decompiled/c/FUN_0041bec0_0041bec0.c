
int __fastcall FUN_0041bec0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = param_1;
    FUN_0041b180(iVar1,*(int *)(param_1 + 0x28));
    Ordinal_1508(*(undefined4 *)(param_1 + 0x24),iVar1,iVar2);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1042();
  return param_1;
}

