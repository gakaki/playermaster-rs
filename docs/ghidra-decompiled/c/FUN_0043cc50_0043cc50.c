
undefined1 __thiscall
FUN_0043cc50(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int *piVar6;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449008;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar4 = param_6;
  puVar3 = param_5;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_5 != (undefined4 *)0x0) {
      local_8 = 0xffffffff;
      if (param_6 != (undefined4 *)0x0) {
        uVar1 = *param_5;
        uVar2 = *param_6;
        uStack_34 = 0x43cce5;
        piVar6 = FUN_0043c590(&param_1,param_1);
        piVar6 = (int *)*piVar6;
        local_8 = 4;
        uStack_34 = param_4;
        uStack_38 = param_3;
        FUN_0041f560(&iStack_3c,param_2);
        uVar5 = (**(code **)(*piVar6 + 0xc))();
        param_2 = CONCAT13(uVar5,(undefined3)param_2);
        local_8 = 0xffffffff;
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
        }
        *puVar3 = uVar1;
        *puVar4 = uVar2;
        ExceptionList = local_10;
        return param_2._3_1_;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

