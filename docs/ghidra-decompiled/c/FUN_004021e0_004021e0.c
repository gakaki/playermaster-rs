
int __fastcall FUN_004021e0(undefined4 *param_1,void *param_2,size_t param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  uint uVar3;
  
  *(undefined1 *)(param_1[0x6bcd] + 0x19f2c + (int)param_1) = *(undefined1 *)(param_1 + 0x6bce);
  if (*(short *)param_1[0x6bd4] == -1) {
    FUN_004026d0((int)param_1);
  }
  FUN_00401bb0((int)param_1,param_1 + 0x3e4);
  FUN_00401bb0((int)param_1,param_1 + 0x3eb);
  iVar1 = FUN_00402030((int)param_1);
  param_1[0x6bd3] = param_1[0x6bd3] + param_3;
  uVar2 = param_1[0x6bcf] + 10 >> 3;
  uVar3 = param_1[0x6bd0] + 10 >> 3;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((uVar2 < param_3 + 4) || (param_2 == (void *)0x0)) {
    if (uVar3 == uVar2) {
      FUN_00402780(param_1,param_4 + 2,3);
      FUN_00402570(param_1,(int)(param_1 + 0x27f),(int)(param_1 + 0x39f));
      iVar1 = param_1[0x6bd0];
    }
    else {
      FUN_00402780(param_1,param_4 + 4,3);
      FUN_00402110(param_1,param_1[0x3ea] + 1,param_1[0x3f1] + 1,iVar1 + 1);
      FUN_00402570(param_1,(int)(param_1 + 5),(int)(param_1 + 0x242));
      iVar1 = param_1[0x6bcf];
    }
    uVar2 = param_1[0x6bd2] + iVar1 + 3;
    param_1[0x6bd1] = param_1[0x6bd1] + (uVar2 >> 3);
    param_1[0x6bd2] = uVar2 & 7;
  }
  else {
    FUN_00402780(param_1,param_4,3);
    iVar1 = param_1[0x6bd2];
    param_1[0x6bd2] = 0;
    param_1[0x6bd1] = param_1[0x6bd1] + (iVar1 + 10U >> 3) + 4 + param_3;
    FUN_00402920(param_1,param_2,param_3);
  }
  if (param_1[0x6bd2] + param_1[0x6bd1] * 8 != param_1[0x6bdb]) {
    param_1[0x1abe9] = "bad compressed size";
  }
  FUN_00401780((int)param_1);
  if (param_4 != 0) {
    FUN_00402840(extraout_ECX);
    param_1[0x6bd2] = param_1[0x6bd2] + 7;
  }
  return ((uint)param_1[0x6bd2] >> 3) + param_1[0x6bd1];
}

