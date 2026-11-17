
void __fastcall FUN_00402780(undefined4 *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  if (0xe < param_3 - 1U) {
    param_1[0x1abe9] = "invalid length";
  }
  param_1[0x6bdb] = param_1[0x6bdb] + param_3;
  param_1[0x6bd6] = param_1[0x6bd6] | param_2 << ((byte)param_1[0x6bd7] & 0x1f);
  iVar2 = param_1[0x6bd7] + param_3;
  param_1[0x6bd7] = iVar2;
  if (0x10 < iVar2) {
    puVar1 = param_1 + 0x6bd9;
    if (param_1[0x6bda] - 1 <= *puVar1) {
      (*(code *)param_1[4])(*param_1,param_1[0x6bd8],puVar1);
    }
    *(undefined1 *)(*puVar1 + param_1[0x6bd8]) = *(undefined1 *)(param_1 + 0x6bd6);
    *puVar1 = *puVar1 + 1;
    *(undefined1 *)(*puVar1 + param_1[0x6bd8]) = *(undefined1 *)((int)param_1 + 0x1af59);
    param_1[0x6bd7] = param_1[0x6bd7] + -0x10;
    *puVar1 = *puVar1 + 1;
    param_1[0x6bd6] = param_2 >> ((char)param_3 - (char)param_1[0x6bd7] & 0x1fU);
  }
  return;
}

