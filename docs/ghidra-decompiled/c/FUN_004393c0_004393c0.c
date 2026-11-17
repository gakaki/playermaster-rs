
undefined1 __thiscall
FUN_004393c0(void *this,int param_1,int param_2,undefined1 *param_3,int *param_4,undefined1 *param_5
            ,undefined1 *param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  int aiStackY_23c [128];
  undefined1 auStack_1e [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448b68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined1 *)0x0) &&
       (((param_4 != (int *)0x0 && (param_5 != (undefined1 *)0x0)) &&
        (local_8 = 0xffffffff, param_6 != (undefined1 *)0x0)))) {
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      param_3 = auStack_1e + -6;
      local_8 = 6;
      FUN_00438fc0((int *)(auStack_1e + -6),(int)param_6);
      param_6 = auStack_1e + -10;
      local_8._0_1_ = 7;
      FUN_00438ec0((int *)(auStack_1e + -10),(int)param_5);
      param_5 = auStack_1e + -0xe;
      local_8._0_1_ = 8;
      FUN_00438dc0((int *)(auStack_1e + -0xe),(int)param_4);
      param_4 = aiStackY_23c + 0x83;
      local_8._0_1_ = 9;
      FUN_0041f660(aiStackY_23c + 0x83,(int)puVar1);
      local_8._0_1_ = 10;
      FUN_0041f560(aiStackY_23c + 0x82,param_2);
      local_8 = CONCAT31(local_8._1_3_,6);
      uVar2 = (**(code **)(*piVar3 + 4))();
      local_8 = 0xffffffff;
      FUN_0040b900(&param_1);
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

