
undefined1 __thiscall
FUN_00425870(void *this,int param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447d08;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar2 = param_4;
  iVar1 = param_2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      if ((param_4 != (undefined4 *)0x0) && (local_8 = 0xffffffff, param_5 != 0)) {
        local_14 = *param_4;
        piVar4 = FUN_0043c590(&param_1,param_1);
        piVar4 = (int *)*piVar4;
        local_8 = 4;
        FUN_004251c0((int *)((int)register0x00000010 + -0x28),param_5);
        uVar3 = (**(code **)(*piVar4 + 0x10))(iVar1,param_3,&local_14);
        local_8 = 0xffffffff;
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
        }
        *puVar2 = local_14;
        ExceptionList = local_10;
        return uVar3;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

