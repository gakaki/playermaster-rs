
void __thiscall FUN_00431cf0(void *this,int param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448558;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x5b < *puVar1) && (puVar1[0x16] != 0)) && (*(int *)(param_1 + 4) != 0)) &&
     ((*(int *)(*(int *)(param_1 + 4) + 4) != 0 && (local_8 = 0, param_2 != 0)))) {
    iVar3 = param_2;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
              (param_2,DAT_0046400c ^ (int)register0x00000010 - 4U);
    puVar2 = FUN_00432120(iVar3);
    (*(code *)puVar1[0x16])(puVar1,*(undefined4 *)(param_1 + 4),puVar2);
  }
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

