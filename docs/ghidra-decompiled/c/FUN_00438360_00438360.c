
bool __thiscall FUN_00438360(void *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448a38;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  local_8 = 0;
  if ((*puVar1 < 0x2c) || (puVar1[10] == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = param_1;
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))
                (param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    puVar2 = FUN_0041e8e0(iVar3);
    iVar3 = (*(code *)puVar1[10])(puVar1,puVar2);
    bVar4 = iVar3 != 0;
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(param_1 + 4 + *(int *)(*(int *)(param_1 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

