
void __fastcall FUN_00402920(undefined4 *param_1,void *param_2,size_t param_3)

{
  uint *puVar1;
  byte bVar2;
  
  FUN_00402840(param_1);
  puVar1 = param_1 + 0x6bd9;
  if (param_1[0x6bda] - 1 <= *puVar1) {
    (*(code *)param_1[4])(*param_1,param_1[0x6bd8],puVar1);
  }
  *(byte *)(param_1[0x6bd8] + *puVar1) = (byte)param_3;
  *puVar1 = *puVar1 + 1;
  bVar2 = (byte)(param_3 >> 8);
  *(byte *)(*puVar1 + param_1[0x6bd8]) = bVar2;
  *puVar1 = *puVar1 + 1;
  if (param_1[0x6bda] - 1 <= *puVar1) {
    (*(code *)param_1[4])(*param_1,param_1[0x6bd8],puVar1);
  }
  *(byte *)(param_1[0x6bd8] + *puVar1) = ~(byte)param_3;
  *puVar1 = *puVar1 + 1;
  *(byte *)(*puVar1 + param_1[0x6bd8]) = ~bVar2;
  *puVar1 = *puVar1 + 1;
  param_1[0x6bdb] = param_1[0x6bdb] + 0x20;
  if (param_1[0x6bd5] != 0) {
    (*(code *)param_1[4])(*param_1,param_1[0x6bd8],puVar1);
    *puVar1 = param_3;
    (*(code *)param_1[4])(*param_1,param_2,puVar1);
    param_1[0x6bdb] = param_1[0x6bdb] + param_3 * 8;
    return;
  }
  if ((uint)param_1[0x6bda] < *puVar1 + param_3) {
    param_1[0x1abe9] = "output buffer too small for in-memory compression";
    param_1[0x6bdb] = param_1[0x6bdb] + param_3 * 8;
    return;
  }
  memcpy((void *)(param_1[0x6bd8] + *puVar1),param_2,param_3);
  *puVar1 = *puVar1 + param_3;
  param_1[0x6bdb] = param_1[0x6bdb] + param_3 * 8;
  return;
}

