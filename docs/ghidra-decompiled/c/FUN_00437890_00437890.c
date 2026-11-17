
undefined1 __thiscall
FUN_00437890(void *this,int param_1,int param_2,undefined1 *param_3,int param_4,int *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int aiStackY_244 [128];
  undefined1 auStack_2a [2];
  undefined4 local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004488f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) &&
       ((param_4 != 0 && (local_8 = 0xffffffff, param_5 != (int *)0x0)))) {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_2a + -6;
      local_8 = 5;
      FUN_004374f0((int *)(auStack_2a + -6),(int)param_5);
      FUN_0041eb00(local_20,param_4);
      param_5 = aiStackY_244 + 0x83;
      local_8._0_1_ = 7;
      FUN_0041f560(aiStackY_244 + 0x83,(int)puVar1);
      local_8._0_1_ = 8;
      FUN_0042faa0(aiStackY_244 + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,9);
      uVar2 = (**(code **)(*piVar3 + 0x1c))();
      FUN_0040b8c0(local_20);
      local_8 = 0xffffffff;
      FUN_0040b900(&param_1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

