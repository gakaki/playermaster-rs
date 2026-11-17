
int __fastcall FUN_0041b000(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar2 = param_1 + 2;
  do {
    Ordinal_1518(puVar2 + -2);
    *(undefined4 *)(param_3 + 4) = puVar2[-1];
    *(undefined4 *)(param_3 + 8) = *puVar2;
    *(undefined4 *)(param_3 + 0xc) = puVar2[1];
    *(undefined4 *)(param_3 + 0x10) = puVar2[2];
    *(undefined4 *)(param_3 + 0x14) = puVar2[3];
    *(undefined4 *)(param_3 + 0x1c) = puVar2[5];
    *(undefined4 *)(param_3 + 0x18) = puVar2[4];
    FUN_004181c0((void *)(param_3 + 0x20),puVar2 + 6);
    param_3 = param_3 + 0x2c;
    puVar1 = puVar2 + 9;
    puVar2 = puVar2 + 0xb;
  } while (puVar1 != param_2);
  return param_3;
}

