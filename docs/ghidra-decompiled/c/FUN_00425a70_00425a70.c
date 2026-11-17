
undefined1 __thiscall
FUN_00425a70(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447c48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  iVar2 = param_5;
  puVar1 = param_4;
  if (param_1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      local_8 = 0xffffffff;
      if (param_5 != 0) {
        local_18 = *param_4;
        local_14 = param_4[1];
        piVar4 = FUN_0043c590(&param_1,param_1);
        piVar4 = (int *)*piVar4;
        local_8 = 3;
        FUN_004252c0((int *)((int)register0x00000010 + -0x2c),iVar2);
        uVar3 = (**(code **)(*piVar4 + 0xc))(param_2,param_3,&local_18);
        local_8 = 0xffffffff;
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
        }
        *puVar1 = local_18;
        puVar1[1] = local_14;
        ExceptionList = local_10;
        return uVar3;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

