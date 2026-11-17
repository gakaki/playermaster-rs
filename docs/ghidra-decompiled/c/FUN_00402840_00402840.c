
void __fastcall FUN_00402840(undefined4 *param_1)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_1[0x6bd7] < 9) {
    if ((int)param_1[0x6bd7] < 1) goto LAB_004028d2;
    if ((uint)param_1[0x6bda] <= (uint)param_1[0x6bd9]) {
      (*(code *)param_1[4])(*param_1,param_1[0x6bd8],param_1 + 0x6bd9);
    }
    uVar4 = param_1[0x6bd8];
    iVar3 = param_1[0x6bd9];
    uVar2 = *(undefined1 *)(param_1 + 0x6bd6);
  }
  else {
    puVar1 = param_1 + 0x6bd9;
    if (param_1[0x6bda] - 1 <= *puVar1) {
      (*(code *)param_1[4])(*param_1,param_1[0x6bd8],puVar1);
    }
    *(undefined1 *)(param_1[0x6bd8] + *puVar1) = *(undefined1 *)(param_1 + 0x6bd6);
    *puVar1 = *puVar1 + 1;
    uVar4 = *puVar1;
    iVar3 = param_1[0x6bd8];
    uVar2 = *(undefined1 *)((int)param_1 + 0x1af59);
  }
  *(undefined1 *)(uVar4 + iVar3) = uVar2;
  param_1[0x6bd9] = param_1[0x6bd9] + 1;
LAB_004028d2:
  if (param_1[0x6bd5] != 0) {
    (*(code *)param_1[4])(*param_1,param_1[0x6bd8],param_1 + 0x6bd9);
  }
  param_1[0x6bd6] = 0;
  param_1[0x6bd7] = 0;
  param_1[0x6bdb] = param_1[0x6bdb] + 7 & 0xfffffff8;
  return;
}

