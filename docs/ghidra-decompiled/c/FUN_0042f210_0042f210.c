
void __thiscall FUN_0042f210(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448348;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x53 < *puVar1) && (puVar1[0x14] != 0)) {
    local_8 = 0;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      if (param_2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_2 + 8;
      }
      iVar5 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,uVar2);
      }
      puVar3 = FUN_0042ff60(iVar5);
      (*(code *)puVar1[0x14])(puVar1,*(undefined4 *)(param_1 + 4),iVar4,puVar3);
    }
  }
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

