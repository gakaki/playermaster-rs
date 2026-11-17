
void __fastcall FUN_0041bf30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar2 = param_1;
    FUN_0041b1f0(iVar1,*(int *)(param_1 + 0x18));
    Ordinal_1508(*(undefined4 *)(param_1 + 0x14),iVar1,iVar2);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1042();
  return;
}

