
void __fastcall FUN_00414910(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  pcVar2 = Ordinal_1508_exref;
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    for (; iVar3 != iVar1; iVar3 = iVar3 + 4) {
      Ordinal_1042();
    }
    Ordinal_1508(*(undefined4 *)(param_1 + 0x2c));
    pcVar2 = Ordinal_1508_exref;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    (*pcVar2)(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

