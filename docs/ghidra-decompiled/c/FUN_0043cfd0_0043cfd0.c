
void __thiscall
FUN_0043cfd0(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  int iStack_4c;
  undefined4 uStack_48;
  undefined **local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  iVar1 = param_1;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_5 != (undefined4 *)0x0) {
      local_34 = &PTR_FUN_0044bd28;
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      local_18 = 0;
      local_20 = 0;
      local_8 = 3;
      uStack_48 = 0x43d060;
      FUN_0043c610(&local_34,param_5);
      uStack_48 = 0x43d06a;
      piVar2 = FUN_0043c590(&param_1,iVar1);
      piVar2 = (int *)*piVar2;
      local_8._0_1_ = 4;
      uStack_48 = param_3;
      FUN_0041f560(&iStack_4c,param_2);
      (**(code **)(*piVar2 + 0x24))();
      local_8 = CONCAT31(local_8._1_3_,3);
      if (param_1 != 0) {
        (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

