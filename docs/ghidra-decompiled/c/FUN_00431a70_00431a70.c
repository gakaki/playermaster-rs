
void __thiscall FUN_00431a70(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448530;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x5f < *puVar1) && (puVar1[0x17] != 0)) {
    local_8 = 1;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      iVar4 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,DAT_0046400c ^ (int)register0x00000010 - 4U);
      }
      puVar2 = FUN_00432080(iVar4);
      iVar4 = param_2;
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                  (param_2,puVar2);
      }
      uVar3 = FUN_00422400(iVar4);
      (*(code *)puVar1[0x17])(puVar1,*(undefined4 *)(param_1 + 4),uVar3);
    }
  }
  local_8 = local_8 & 0xffffff00;
  if (param_2 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4) + 4))();
  }
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

