
void __fastcall FUN_00402110(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_2 < 0x101) || (param_3 < 1)) || (param_4 < 4)) {
    param_1[0x1abe9] = "not enough codes";
  }
  if (((0x11e < param_2) || (0x1e < param_3)) || (0x13 < param_4)) {
    param_1[0x1abe9] = "too many codes";
  }
  FUN_00402780(param_1,param_2 - 0x101,5);
  FUN_00402780(param_1,param_3 - 1U,5);
  FUN_00402780(param_1,param_4 - 4,4);
  iVar1 = 0;
  if (0 < param_4) {
    do {
      FUN_00402780(param_1,(uint)*(ushort *)
                                  ((int)param_1 + (uint)(byte)(&DAT_0044cec0)[iVar1] * 4 + 0xef6),3)
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  FUN_00401ec0(param_1,(int)(param_1 + 5),param_2 + -1);
  FUN_00401ec0(param_1,(int)(param_1 + 0x242),param_3 - 1U);
  return;
}

