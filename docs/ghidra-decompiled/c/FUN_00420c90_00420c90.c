
int * __thiscall FUN_00420c90(void *this,int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447959;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 2;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x78) || (puVar1[0x1d] == 0)) {
    *param_1 = 0;
LAB_00420d8c:
    if (param_2 == 0) goto LAB_00420dae;
    iVar5 = param_2 + 4;
    iVar6 = *(int *)(*(int *)(param_2 + 4) + 4);
  }
  else {
    local_8._1_3_ = 0;
    if (param_2 == 0) {
      *param_1 = 0;
      goto LAB_00420dae;
    }
    local_8 = 2;
    if (param_3 != 0) {
      iVar5 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,uVar2);
      }
      puVar3 = FUN_00421a70(iVar5);
      iVar5 = param_2;
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                  (param_2,puVar3);
      }
      uVar4 = FUN_004215c0(iVar5);
      iVar5 = (*(code *)puVar1[0x1d])(puVar1,uVar4);
      FUN_00421730(param_1,iVar5);
      goto LAB_00420d8c;
    }
    local_8._1_3_ = 0;
    *param_1 = 0;
    iVar6 = param_2 + 4;
    iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
  }
  local_8._0_1_ = 1;
  (**(code **)(*(int *)(iVar6 + iVar5) + 4))();
LAB_00420dae:
  local_8 = (uint)local_8._1_3_ << 8;
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_3 + 4 + *(int *)(*(int *)(param_3 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

