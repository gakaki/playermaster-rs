
bool __thiscall FUN_00431da0(void *this,int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448588;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x4b < *puVar1) && (puVar1[0x12] != 0)) {
    local_8 = 0;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      if (*(int *)(param_3 + 4) == 0) {
        puVar2 = (undefined8 *)Ordinal_1506(0xc,DAT_0046400c ^ (int)register0x00000010 - 4U);
        *(undefined8 **)(param_3 + 4) = puVar2;
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        *(undefined1 *)(param_3 + 8) = 1;
      }
      iVar4 = param_2;
      if (param_2 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                  (param_2,*(undefined4 *)(param_3 + 4));
      }
      uVar3 = FUN_0041e5a0(iVar4);
      iVar4 = (*(code *)puVar1[0x12])(puVar1,*(undefined4 *)(param_1 + 4),uVar3);
      bVar5 = iVar4 != 0;
      goto LAB_00431e53;
    }
  }
  bVar5 = false;
LAB_00431e53:
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return bVar5;
}

