
void __fastcall FUN_0041a5d0(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      Ordinal_2341();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar3 = (undefined4 *)(param_2 + 8);
    do {
      puVar2[-2] = *(undefined4 *)((param_2 - param_1) + -8 + (int)puVar2);
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      Ordinal_1518(puVar3 + 1);
      puVar2[2] = puVar3[2];
      puVar2[3] = puVar3[3];
      puVar2[4] = puVar3[4];
      puVar2[5] = puVar3[5];
      puVar2[6] = puVar3[6];
      puVar2[7] = puVar3[7];
      puVar2[8] = puVar3[8];
      puVar2[9] = puVar3[9];
      puVar2[10] = puVar3[10];
      puVar2[0xb] = puVar3[0xb];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xe;
      puVar3 = puVar3 + 0xe;
    } while (param_3 != 0);
  }
  return;
}

