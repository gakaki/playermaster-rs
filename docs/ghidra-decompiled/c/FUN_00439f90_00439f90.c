
/* WARNING: Removing unreachable block (ram,0x0043a04d) */

void __thiscall FUN_00439f90(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  if ((param_1 != 0) && (local_8 = 0xffffffff, param_2 != 0)) {
    piVar1 = FUN_0043c590(&param_1,param_1);
    piVar1 = (int *)*piVar1;
    local_8 = 3;
    FUN_0041f560((int *)((int)register0x00000010 + -0x30),param_2);
    (**(code **)(*piVar1 + 0x14))();
    local_8 = 0xffffffff;
    if (param_1 != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
    }
  }
  ExceptionList = local_10;
  return;
}

