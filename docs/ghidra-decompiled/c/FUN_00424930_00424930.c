
void FUN_00424930(int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5,
                 undefined1 *param_6)

{
  int *piVar1;
  int aiStackY_238 [128];
  undefined1 auStack_1a [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447c18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((param_4 != (int *)0x0 && (param_5 != (undefined1 *)0x0)) &&
      (local_8 = 0xffffffff, param_6 != (undefined1 *)0x0)))) {
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 6;
    FUN_004240a0((int *)(auStack_1a + -6),(int)param_6);
    param_6 = auStack_1a + -10;
    local_8._0_1_ = 7;
    FUN_00423fa0((int *)(auStack_1a + -10),(int)param_5);
    param_5 = auStack_1a + -0xe;
    local_8._0_1_ = 8;
    FUN_00421830((int *)(auStack_1a + -0xe),(int)param_4);
    param_4 = aiStackY_238 + 0x83;
    local_8._0_1_ = 9;
    FUN_0041f660(aiStackY_238 + 0x83,param_3);
    local_8._0_1_ = 10;
    FUN_0041f560(aiStackY_238 + 0x82,param_2);
    local_8 = CONCAT31(local_8._1_3_,6);
    (**(code **)(*piVar1 + 0x1c))();
    local_8 = 0xffffffff;
    FUN_0040b900(&param_1);
  }
  ExceptionList = local_10;
  return;
}

