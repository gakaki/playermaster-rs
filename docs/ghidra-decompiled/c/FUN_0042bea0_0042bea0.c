
undefined1 __thiscall
FUN_0042bea0(void *this,int param_1,int param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_48;
  undefined1 auStack_36 [2];
  undefined4 local_2c [3];
  undefined4 local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) && ((param_4 != 0 && (local_8 = 0xffffffff, param_5 != 0))))
    {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_36 + -6;
      local_8 = 5;
      iStack_48 = 0x42bf4f;
      FUN_0042bac0((int *)(auStack_36 + -6),param_5);
      FUN_0041eb00(local_2c,param_4);
      iStack_48 = 0x42bf67;
      FUN_0041eb00(local_20,(int)puVar1);
      local_8._0_1_ = 8;
      FUN_0041f560(&iStack_48,param_2);
      local_8 = CONCAT31(local_8._1_3_,10);
      uVar2 = (**(code **)(*piVar3 + 0xc))();
      FUN_0040b8c0(local_20);
      FUN_0040b8c0(local_2c);
      local_8 = 0xffffffff;
      FUN_0040b900(&param_1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

