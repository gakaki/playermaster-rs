
void __thiscall FUN_00438570(void *this,int *param_1,undefined1 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448a68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x17 < *puVar1) && (puVar1[5] != 0)) {
    iVar2 = cef_string_list_alloc(DAT_0046400c ^ (int)register0x00000010 - 4U);
    local_8 = 0;
    if (iVar2 != 0) {
      FUN_004231d0(param_1,iVar2);
    }
    iVar4 = param_3;
    if (param_3 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))();
    }
    puVar3 = FUN_0041e8e0(iVar4);
    (*(code *)puVar1[5])(puVar1,iVar2,param_2,puVar3);
    if (iVar2 != 0) {
      cef_string_list_free(iVar2);
    }
  }
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

