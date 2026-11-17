
void __thiscall FUN_00439d40(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448ca0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20[3] = 0;
  CGridCellBase::EndEdit(this);
  iVar1 = param_1;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_8 = 2;
    FUN_00423210(param_3,local_20);
    piVar2 = FUN_0043c590(&param_1,iVar1);
    piVar2 = (int *)*piVar2;
    local_8._0_1_ = 3;
    FUN_0041f560(local_20 + -4,param_2);
    (**(code **)(*piVar2 + 8))();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
    FUN_00435740(local_20);
  }
  ExceptionList = local_10;
  return;
}

