
void __thiscall FUN_00426d20(void *this,int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449458;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if (((0x3b < *puVar1) && (puVar1[0xe] != 0)) && (local_8 = 0, param_1 != 0)) {
    iVar3 = param_1;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))
              (param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
    uVar2 = FUN_00426e30(iVar3);
    (*(code *)puVar1[0xe])(puVar1,uVar2);
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

