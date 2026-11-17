
undefined1 __thiscall
FUN_00425660(void *this,int param_1,undefined1 *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  int *piVar6;
  int aiStackY_23c [128];
  undefined1 auStack_26 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447ce0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar4 = param_3;
  puVar3 = param_2;
  if (param_1 != 0) {
    if (param_2 != (undefined1 *)0x0) {
      if ((param_3 != (uint *)0x0) && (local_8 = 0xffffffff, param_4 != 0)) {
        uVar1 = *param_3;
        piVar6 = FUN_0043c590(&param_1,param_1);
        puVar2 = (undefined4 *)*piVar6;
        param_2 = auStack_26 + -6;
        local_8 = 4;
        FUN_004250c0((int *)(auStack_26 + -6),param_4);
        local_8._0_1_ = 5;
        FUN_0041f760(aiStackY_23c + 0x82,(int)puVar3);
        local_8 = CONCAT31(local_8._1_3_,4);
        uVar5 = (**(code **)*puVar2)();
        local_8 = 0xffffffff;
        if (param_1 != 0) {
          (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
        }
        *puVar4 = (uint)(uVar1 != 0);
        ExceptionList = local_10;
        return uVar5;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

