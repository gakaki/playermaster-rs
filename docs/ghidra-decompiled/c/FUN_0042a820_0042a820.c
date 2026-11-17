
bool __thiscall FUN_0042a820(void *this,int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448088;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x83 < *puVar1) && (puVar1[0x20] != 0)) {
    if ((*(int *)(param_1 + 4) != 0) &&
       ((*(int *)(*(int *)(param_1 + 4) + 4) != 0 && (local_8 = 0, param_2 != 0)))) {
      iVar4 = param_2;
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))(param_2,uVar2)
      ;
      uVar3 = FUN_00422400(iVar4);
      iVar4 = (*(code *)puVar1[0x20])(puVar1,*(undefined4 *)(param_1 + 4),uVar3);
      bVar5 = iVar4 != 0;
      goto LAB_0042a8c2;
    }
  }
  bVar5 = false;
LAB_0042a8c2:
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2) + 4))();
  }
  ExceptionList = local_10;
  return bVar5;
}

