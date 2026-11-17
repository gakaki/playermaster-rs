
/* WARNING: Removing unreachable block (ram,0x0043d6eb) */
/* WARNING: Removing unreachable block (ram,0x0043d74e) */

void __thiscall FUN_0043d620(void *this,int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int iStack_10c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449188;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (param_2 != 0)) {
    local_8 = 2;
    iStack_10c = 0x43d6dd;
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8._0_1_ = 4;
    FUN_0041f560(&iStack_10c,param_2);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = CONCAT31(local_8._1_3_,2);
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

