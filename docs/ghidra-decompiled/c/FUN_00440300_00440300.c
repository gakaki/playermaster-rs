
void FUN_00440300(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  int *piVar1;
  int aiStackY_244 [128];
  undefined1 auStack_26 [2];
  undefined **local_20;
  undefined1 *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449688;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (((param_1 != 0) && (param_4 != (int *)0x0)) && (param_5 != (undefined1 *)0x0)) {
    if (param_6 != (undefined1 *)0x0) {
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = param_6;
      local_18 = 0;
      local_8 = 4;
      piVar1 = FUN_0043c590(&param_1,param_1);
      piVar1 = (int *)*piVar1;
      param_6 = auStack_26 + -10;
      local_8._0_1_ = 5;
      FUN_004253c0((int *)(auStack_26 + -10),(int)param_5);
      param_5 = auStack_26 + -0xe;
      local_8._0_1_ = 6;
      FUN_0041f760((int *)(auStack_26 + -0xe),(int)param_4);
      param_4 = aiStackY_244 + 0x83;
      local_8._0_1_ = 7;
      FUN_0041f660(aiStackY_244 + 0x83,param_3);
      local_8._0_1_ = 8;
      FUN_0041f560(aiStackY_244 + 0x82,param_2);
      local_8._0_1_ = 5;
      (**(code **)(*piVar1 + 0xc))();
      local_8 = CONCAT31(local_8._1_3_,4);
      if (param_1 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
      }
      FUN_0040b8c0(&local_20);
    }
  }
  ExceptionList = local_10;
  return;
}

