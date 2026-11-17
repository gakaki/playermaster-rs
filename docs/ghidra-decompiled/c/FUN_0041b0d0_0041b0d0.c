
int __fastcall FUN_0041b0d0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar5 = param_1 + 5;
  do {
    Ordinal_1518(puVar5 + -5);
    uVar2 = puVar5[-3];
    uVar3 = puVar5[-2];
    uVar4 = puVar5[-1];
    *(undefined4 *)(param_3 + 4) = puVar5[-4];
    *(undefined4 *)(param_3 + 8) = uVar2;
    *(undefined4 *)(param_3 + 0xc) = uVar3;
    *(undefined4 *)(param_3 + 0x10) = uVar4;
    *(undefined4 *)(param_3 + 0x14) = *puVar5;
    Ordinal_1518(puVar5 + 1);
    *(undefined4 *)(param_3 + 0x1c) = puVar5[2];
    puVar1 = puVar5 + 3;
    param_3 = param_3 + 0x20;
    puVar5 = puVar5 + 8;
  } while (puVar1 != param_2);
  return param_3;
}

