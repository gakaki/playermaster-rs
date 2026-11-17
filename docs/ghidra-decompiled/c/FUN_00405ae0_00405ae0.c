
undefined4 __fastcall FUN_00405ae0(undefined4 param_1,int *param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445a6a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = Ordinal_5824(DAT_0046400c ^ (int)register0x00000010 - 4U);
  Ordinal_285(uVar2);
  local_8 = 0;
  if (param_3 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    psVar4 = param_3;
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
    } while (sVar1 != 0);
    iVar3 = (int)psVar4 - (int)(param_3 + 1) >> 1;
  }
  Ordinal_2967(param_1,*param_2,*(undefined4 *)(*param_2 + -0xc),param_3,iVar3);
  ExceptionList = local_10;
  return param_1;
}

