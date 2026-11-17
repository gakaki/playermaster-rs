
void __thiscall FUN_00426b50(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447d68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x4f < *puVar1) && (puVar1[0x13] != 0)) {
    if ((*(int *)(param_1 + 4) != 0) &&
       (((*(int *)(*(int *)(param_1 + 4) + 4) != 0 && (*(int *)(param_2 + 4) != 0)) &&
        (*(int *)(*(int *)(param_2 + 4) + 4) != 0)))) {
      iVar2 = cef_string_multimap_alloc(DAT_0046400c ^ (int)register0x00000010 - 4U);
      local_8 = 0;
      if (iVar2 != 0) {
        FUN_00423560(param_4,iVar2);
      }
      iVar4 = param_3;
      if (param_3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4))
                  (param_3,iVar2);
      }
      uVar3 = FUN_00426e30(iVar4);
      (*(code *)puVar1[0x13])
                (puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),uVar3);
      if (iVar2 != 0) {
        cef_string_multimap_free(iVar2);
      }
    }
  }
  local_8 = 0xffffffff;
  if (param_3 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_3 + 4) + 4) + param_3 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

