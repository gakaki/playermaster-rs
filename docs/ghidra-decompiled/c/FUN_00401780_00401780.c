
void __fastcall FUN_00401780(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x11e;
  puVar1 = (undefined2 *)(param_1 + 0x14);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  iVar2 = 0x1e;
  puVar1 = (undefined2 *)(param_1 + 0x908);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  iVar2 = 0x13;
  puVar1 = (undefined2 *)(param_1 + 0xef4);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x1af40) = 0;
  *(undefined4 *)(param_1 + 0x1af3c) = 0;
  *(undefined4 *)(param_1 + 0x1af34) = 0;
  *(undefined4 *)(param_1 + 0x1af30) = 0;
  *(undefined4 *)(param_1 + 0x1af2c) = 0;
  *(undefined2 *)(param_1 + 0x414) = 1;
  *(undefined2 *)(param_1 + 0x1af38) = 0x100;
  return;
}

