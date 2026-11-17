
undefined1 __thiscall
FUN_0043e600(void *this,int param_1,int param_2,undefined4 param_3,undefined1 *param_4,int param_5,
            undefined1 *param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_40;
  undefined1 auStack_2a [2];
  undefined4 local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004492d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_4;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_4 != (undefined1 *)0x0) &&
       ((param_5 != 0 && (local_8 = 0xffffffff, param_6 != (undefined1 *)0x0)))) {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_4 = auStack_2a + -6;
      local_8 = 5;
      FUN_0043dcd0((int *)(auStack_2a + -6),(int)param_6);
      param_6 = auStack_2a + -10;
      local_8._0_1_ = 6;
      iStack_40 = 0x43e6c4;
      FUN_0043ddd0((int *)(auStack_2a + -10),param_5);
      FUN_0041eb00(local_20,(int)puVar1);
      local_8._0_1_ = 8;
      FUN_0041f560(&iStack_40,param_2);
      local_8 = CONCAT31(local_8._1_3_,9);
      uVar2 = (**(code **)(*piVar3 + 0x14))();
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

