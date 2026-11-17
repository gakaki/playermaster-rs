
void __fastcall FUN_00402a50(int param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  
  if (7 < param_2 - 1U) {
    *(char **)(param_1 + 0x6afa4) = "bad pack level";
  }
  *(undefined4 *)(param_1 + 0x6af78) = 0;
  if (*(int *)(param_1 + 0x6af70) == 0) {
    *(undefined4 *)(param_1 + 0x6af78) = 1;
    *(undefined4 *)(param_1 + 0x6af70) = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x6af6c) = 0;
  memset((void *)(param_1 + 0x4af70),0,0x1fffc);
  *(uint *)(param_1 + 0x6af98) = (uint)*(ushort *)(&DAT_0044ce72 + param_2 * 8);
  *(uint *)(param_1 + 0x6af9c) = (uint)*(ushort *)(&DAT_0044ce70 + param_2 * 8);
  *(uint *)(param_1 + 0x6afa0) = (uint)*(ushort *)(&DAT_0044ce74 + param_2 * 8);
  *(uint *)(param_1 + 0x6af94) = (uint)*(ushort *)(&DAT_0044ce76 + param_2 * 8);
  if (param_2 < 3) {
    *param_3 = *param_3 | 4;
  }
  else if (7 < param_2) {
    *param_3 = *param_3 | 2;
  }
  *(undefined4 *)(param_1 + 0x6af84) = 0;
  *(undefined4 *)(param_1 + 0x6af74) = 0;
  uVar1 = (**(code **)(param_1 + 0xc))(param_1,(byte *)(param_1 + 0x1af70),0x10000);
  *(uint *)(param_1 + 0x6af90) = uVar1;
  if ((uVar1 == 0) || (uVar1 == 0xffffffff)) {
    *(undefined4 *)(param_1 + 0x6af8c) = 1;
    *(undefined4 *)(param_1 + 0x6af90) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x6af8c) = 0;
  if (uVar1 < 0x106) {
    FUN_00402d60(param_1);
  }
  *(undefined4 *)(param_1 + 0x6af7c) = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x1af70);
  *(uint *)(param_1 + 0x6af7c) = uVar1;
  *(uint *)(param_1 + 0x6af7c) = (uint)*(byte *)(param_1 + 0x1af71) ^ uVar1 << 5;
  return;
}

