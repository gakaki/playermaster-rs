
undefined1 __thiscall
FUN_004391d0(void *this,int param_1,int param_2,undefined4 *param_3,undefined1 *param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448b18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar1 = param_3;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined4 *)0x0) && (local_8 = 0xffffffff, param_4 != (undefined1 *)0x0)) {
      uStack_2c = 0x439256;
      piVar3 = FUN_0043c590(&param_1,param_1);
      piVar3 = (int *)*piVar3;
      local_8 = 4;
      param_3 = &uStack_2c;
      FUN_00438dc0(&uStack_2c,(int)param_4);
      param_4 = (undefined1 *)((int)register0x00000010 + -0x30);
      local_8._0_1_ = 5;
      FUN_0041f660((int *)((int)register0x00000010 + -0x30),(int)puVar1);
      local_8._0_1_ = 6;
      FUN_0041f560((int *)((int)register0x00000010 + -0x34),param_2);
      local_8 = CONCAT31(local_8._1_3_,4);
      uVar2 = (**(code **)(*piVar3 + 8))();
      local_8 = 0xffffffff;
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
      }
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return 0;
}

