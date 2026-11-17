
void __thiscall
FUN_0043a6a0(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int aiStackY_240 [128];
  undefined1 auStack_26 [2];
  undefined4 local_20 [3];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined1 *)0x0;
  CGridCellBase::EndEdit(this);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     ((param_4 != 0 && (local_8 = 0xffffffff, param_5 != (int *)0x0)))) {
    piVar2 = FUN_0043c590(&param_1,param_1);
    puVar1 = (undefined4 *)*piVar2;
    local_14 = auStack_26 + -6;
    local_8 = 5;
    FUN_0043a3a0((int *)(auStack_26 + -6),(int)param_5);
    FUN_0041eb00(local_20,param_4);
    param_5 = aiStackY_240 + 0x83;
    local_8._0_1_ = 7;
    FUN_0043a4a0(aiStackY_240 + 0x83,param_3);
    local_8._0_1_ = 8;
    FUN_0041f560(aiStackY_240 + 0x82,param_2);
    local_8 = CONCAT31(local_8._1_3_,9);
    (**(code **)*puVar1)();
    FUN_0040b8c0(local_20);
    local_8 = 0xffffffff;
    FUN_0040b900(&param_1);
  }
  ExceptionList = local_10;
  return;
}

