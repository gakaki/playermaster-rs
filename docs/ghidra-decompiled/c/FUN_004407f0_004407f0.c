
void __cdecl FUN_004407f0(undefined4 *param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cef_string_utf16_set(*param_1,param_1[1],param_2,param_3);
  cef_string_utf16_set(param_1[3],param_1[4],param_2 + 0xc,param_3);
  cef_string_utf16_set(param_1[6],param_1[7],param_2 + 0x18,param_3);
  cef_string_utf16_set(param_1[9],param_1[10],param_2 + 0x24,param_3);
  *(undefined4 *)(param_2 + 0x30) = param_1[0xc];
  *(undefined4 *)(param_2 + 0x34) = param_1[0xd];
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  uVar3 = param_1[0x11];
  *(undefined4 *)(param_2 + 0x38) = param_1[0xe];
  *(undefined4 *)(param_2 + 0x3c) = uVar1;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  uVar1 = param_1[0x13];
  uVar2 = param_1[0x14];
  uVar3 = param_1[0x15];
  *(undefined4 *)(param_2 + 0x48) = param_1[0x12];
  *(undefined4 *)(param_2 + 0x4c) = uVar1;
  *(undefined4 *)(param_2 + 0x50) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = uVar3;
  uVar1 = param_1[0x17];
  uVar2 = param_1[0x18];
  uVar3 = param_1[0x19];
  *(undefined4 *)(param_2 + 0x58) = param_1[0x16];
  *(undefined4 *)(param_2 + 0x5c) = uVar1;
  *(undefined4 *)(param_2 + 0x60) = uVar2;
  *(undefined4 *)(param_2 + 100) = uVar3;
  uVar1 = param_1[0x1b];
  uVar2 = param_1[0x1c];
  uVar3 = param_1[0x1d];
  *(undefined4 *)(param_2 + 0x68) = param_1[0x1a];
  *(undefined4 *)(param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0x70) = uVar2;
  *(undefined4 *)(param_2 + 0x74) = uVar3;
  *(undefined4 *)(param_2 + 0x78) = param_1[0x1e];
  uVar1 = param_1[0x20];
  uVar2 = param_1[0x21];
  uVar3 = param_1[0x22];
  *(undefined4 *)(param_2 + 0x7c) = param_1[0x1f];
  *(undefined4 *)(param_2 + 0x80) = uVar1;
  *(undefined4 *)(param_2 + 0x84) = uVar2;
  *(undefined4 *)(param_2 + 0x88) = uVar3;
  uVar1 = param_1[0x24];
  uVar2 = param_1[0x25];
  uVar3 = param_1[0x26];
  *(undefined4 *)(param_2 + 0x8c) = param_1[0x23];
  *(undefined4 *)(param_2 + 0x90) = uVar1;
  *(undefined4 *)(param_2 + 0x94) = uVar2;
  *(undefined4 *)(param_2 + 0x98) = uVar3;
  return;
}

