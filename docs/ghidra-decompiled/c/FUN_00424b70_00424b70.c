
undefined1 __thiscall
FUN_00424b70(void *this,int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447c48;
  local_10 = ExceptionList;
  uVar4 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_18 = 0;
  CGridCellBase::EndEdit(this);
  puVar2 = param_4;
  puVar1 = param_3;
  if (param_1 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      local_8 = 0xffffffff;
      if (param_4 != (undefined4 *)0x0) {
        local_14 = *param_3;
        local_18 = *param_4;
        piVar5 = FUN_0043c590(&param_1,param_1);
        local_8 = 3;
        uVar3 = (**(code **)(*(int *)*piVar5 + 4))(param_2,&local_14,&local_18,uVar4);
        local_8 = 0xffffffff;
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
        }
        *puVar1 = local_14;
        *puVar2 = local_18;
        ExceptionList = local_10;
        return uVar3;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

