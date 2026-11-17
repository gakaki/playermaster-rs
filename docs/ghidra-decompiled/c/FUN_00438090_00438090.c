
void __thiscall FUN_00438090(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004489e0;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_20 + 7);
  ExceptionList = &local_10;
  local_20[3] = 0;
  CGridCellBase::EndEdit(this);
  if (param_1 != 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_8 = 1;
    FUN_00423210(param_3,local_20);
    piVar2 = FUN_0043c590(&param_1,param_1);
    local_8._0_1_ = 2;
    (*(code *)**(undefined4 **)*piVar2)(param_2,local_20,uVar1);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
    FUN_00435740(local_20);
  }
  ExceptionList = local_10;
  return;
}

