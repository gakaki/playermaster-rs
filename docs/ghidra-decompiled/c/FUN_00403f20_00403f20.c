
uint __fastcall FUN_00403f20(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  uVar3 = uVar1 & 0xfffd | 2;
  uVar2 = *(uint *)(&DAT_0044ca70 + ((*param_1 ^ (int)param_2) & 0xff) * 4) ^ *param_1 >> 8;
  *param_1 = uVar2;
  uVar2 = ((uVar2 & 0xff) + param_1[1]) * 0x8088405 + 1;
  param_1[1] = uVar2;
  param_1[2] = uVar1 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((uVar2 >> 0x18 ^ uVar1) & 0xff) * 4);
  return (uVar3 ^ 1) * uVar3 >> 8 ^ (int)param_2;
}

