
void __thiscall FUN_0042f7b0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004483a8;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x5f < *puVar1) && (puVar1[0x17] != 0)) {
    if (param_4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_4 + 4;
    }
    if (param_3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_3 + 4;
    }
    if (param_1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = param_1 + 4;
    }
    iVar7 = param_2;
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                (param_2,iVar5,iVar4,uVar2);
    }
    puVar3 = FUN_0042fd80(iVar7);
    (*(code *)puVar1[0x17])(puVar1,iVar6,puVar3);
  }
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

