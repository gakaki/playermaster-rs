
undefined4 __fastcall FUN_0040c1f0(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445cea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = Ordinal_5824(DAT_0046400c ^ (int)register0x00000010 - 4U);
  Ordinal_285(uVar1);
  local_8 = 0;
  Ordinal_2967(param_1,*param_2,*(undefined4 *)(*param_2 + -0xc),*param_3,
               *(undefined4 *)(*param_3 + -0xc));
  ExceptionList = local_10;
  return param_1;
}

