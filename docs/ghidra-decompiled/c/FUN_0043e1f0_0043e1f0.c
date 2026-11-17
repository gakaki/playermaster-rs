
undefined1 __thiscall
FUN_0043e1f0(void *this,int param_1,int param_2,undefined1 *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_70;
  undefined1 auStack_4e [2];
  undefined4 local_44 [3];
  undefined4 local_38 [3];
  undefined4 local_2c [3];
  undefined4 local_20 [3];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) && ((param_5 != 0 && (local_8 = 0xffffffff, param_9 != 0))))
    {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_4e + -6;
      local_8 = 5;
      FUN_00428970((int *)(auStack_4e + -6),param_9);
      FUN_0041eb00(local_44,param_8);
      FUN_0041eb00(local_38,param_7);
      FUN_0041eb00(local_2c,param_5);
      iStack_70 = 0x43e2dd;
      FUN_0041eb00(local_20,(int)puVar1);
      local_8._0_1_ = 10;
      FUN_0041f560(&iStack_70,param_2);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      uVar2 = (**(code **)(*piVar3 + 0xc))();
      FUN_0040b8c0(local_20);
      FUN_0040b8c0(local_2c);
      FUN_0040b8c0(local_38);
      FUN_0040b8c0(local_44);
      local_8 = 0xffffffff;
      FUN_0040b900(&param_1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

