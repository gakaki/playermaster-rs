
bool __thiscall FUN_004384a0(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448348;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x23 < *puVar1) && (puVar1[8] != 0)) {
    local_8 = 0;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_2 + 4;
      }
      iVar5 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,DAT_0046400c ^ (int)register0x00000010 - 4U);
      }
      puVar2 = FUN_00438900(iVar5);
      iVar3 = (*(code *)puVar1[8])(puVar1,*(undefined4 *)(param_1 + 4),iVar3,puVar2);
      bVar4 = iVar3 != 0;
      goto LAB_00438537;
    }
  }
  bVar4 = false;
LAB_00438537:
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_3 + 4 + *(int *)(*(int *)(param_3 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

