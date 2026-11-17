
void __thiscall FUN_00431420(void *this,int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004484b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  local_8 = 0;
  if ((0x57 < *puVar1) && (puVar1[0x15] != 0)) {
    iVar3 = param_1;
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))
                (param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    puVar2 = FUN_0041e8e0(iVar3);
    (*(code *)puVar1[0x15])(puVar1,puVar2);
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

