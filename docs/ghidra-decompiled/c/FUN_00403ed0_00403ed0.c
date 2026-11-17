
void __fastcall FUN_00403ed0(uint *param_1,char param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(&DAT_0044ca70 + (((int)param_2 ^ *param_1) & 0xff) * 4) ^ *param_1 >> 8;
  *param_1 = uVar1;
  uVar1 = ((uVar1 & 0xff) + param_1[1]) * 0x8088405 + 1;
  param_1[1] = uVar1;
  param_1[2] = param_1[2] >> 8 ^
               *(uint *)(&DAT_0044ca70 + ((uVar1 >> 0x18 ^ param_1[2]) & 0xff) * 4);
  return;
}

