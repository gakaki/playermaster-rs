
undefined4 * FUN_0041f900(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int aiStackY_244 [128];
  int iVar3;
  undefined1 auStack_2a [2];
  undefined **local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_4;
  puStack_c = &LAB_00447878;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  if (param_1 != 0) {
    if ((param_4 != 0) && (local_8 = 0xffffffff, param_5 != (int *)0x0)) {
      ExceptionList = &local_10;
      piVar1 = FUN_0043c590(&param_4,param_1);
      puVar2 = (undefined4 *)*piVar1;
      local_14 = auStack_2a + -6;
      local_8 = 3;
      FUN_0041f760((int *)(auStack_2a + -6),(int)param_5);
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = iVar3;
      local_18 = 0;
      local_8._0_1_ = 5;
      param_5 = aiStackY_244 + 0x83;
      FUN_0041f660(aiStackY_244 + 0x83,param_3);
      local_8._0_1_ = 6;
      FUN_0041f560(aiStackY_244 + 0x82,param_2);
      local_8._0_1_ = 7;
      (**(code **)*puVar2)(&param_1);
      FUN_0040b8c0(&local_20);
      local_8 = CONCAT31(local_8._1_3_,10);
      if (param_4 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_4 + 4) + 4) + param_4 + 4) + 4))();
      }
      iVar3 = param_1;
      if (param_1 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))();
      }
      puVar2 = FUN_0041f860(iVar3);
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

