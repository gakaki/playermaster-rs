
undefined8 __thiscall FUN_0042bcc0(void *this,int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined **local_34 [8];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined **local_8;
  
  local_8 = (undefined **)0xffffffff;
  puStack_c = &LAB_004480e8;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (uint)(local_34 + 0xc);
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  local_8 = (undefined **)0xffffffff;
  if (param_1 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  piVar3 = FUN_0043c590(&param_1,param_1);
  local_8 = (undefined **)0x1;
  iVar4 = (**(code **)(*(int *)*piVar3 + 0x14))(local_34,param_2,uVar2);
  if (iVar4 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)(iVar4 + 4);
  }
  uVar1 = *puVar5;
  local_34[0] = &PTR_FUN_0044bd28;
  local_8 = (undefined **)0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return uVar1;
}

