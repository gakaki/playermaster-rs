
uint __fastcall FUN_00403dc0(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar3 = ~param_1;
  if (7 < param_3) {
    uVar4 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((*param_2 ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[1] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[2] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[3] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[4] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[5] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((param_2[6] ^ uVar3) & 0xff) * 4);
      pbVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((*pbVar1 ^ uVar3) & 0xff) * 4);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((bVar2 ^ uVar3) & 0xff) * 4);
  }
  return ~uVar3;
}

