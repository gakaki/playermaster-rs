
void __thiscall
FUN_004390c0(void *this,int param_1,int param_2,int param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int aiStackY_234 [128];
  undefined1 auStack_1a [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448ae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != (int *)0x0 && (local_8 = 0xffffffff, param_5 != (undefined1 *)0x0)))) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_8 = 5;
    FUN_00438ec0((int *)(auStack_1a + -6),(int)param_5);
    param_5 = auStack_1a + -10;
    local_8._0_1_ = 6;
    FUN_00438dc0((int *)(auStack_1a + -10),(int)param_4);
    param_4 = aiStackY_234 + 0x83;
    local_8._0_1_ = 7;
    FUN_0041f660(aiStackY_234 + 0x83,param_3);
    local_8._0_1_ = 8;
    FUN_0041f560(aiStackY_234 + 0x82,param_2);
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)*puVar1)();
    local_8 = 0xffffffff;
    FUN_0040b900(&param_1);
  }
  ExceptionList = local_10;
  return;
}

