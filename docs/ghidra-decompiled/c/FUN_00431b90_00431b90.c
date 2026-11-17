
bool __thiscall FUN_00431b90(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448348;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x2f < *puVar1) && (puVar1[0xb] != 0)) {
    local_8 = 0;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      iVar3 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,DAT_0046400c ^ (int)register0x00000010 - 4U);
      }
      puVar2 = FUN_0041e980(iVar3);
      iVar3 = (*(code *)puVar1[0xb])
                        (puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),puVar2);
      bVar4 = iVar3 != 0;
      goto LAB_00431c1e;
    }
  }
  bVar4 = false;
LAB_00431c1e:
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(param_3 + 4 + *(int *)(*(int *)(param_3 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

