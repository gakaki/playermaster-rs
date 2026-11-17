
void __thiscall
FUN_0042f370(void *this,undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,
            int param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448378;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x43 < *puVar1) && (puVar1[0x10] != 0)) && (-1 < param_5)) && (param_6 != 0)) {
    iVar3 = cef_string_list_alloc(uVar2);
    local_8 = 0;
    if (iVar3 != 0) {
      FUN_004231d0(param_4,iVar3);
    }
    iVar5 = param_6;
    if (param_6 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_6 + 4) + 4) + param_6 + 4))();
    }
    puVar4 = FUN_00430000(iVar5);
    (*(code *)puVar1[0x10])
              (puVar1,param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_3 + 4),iVar3,
               param_5,puVar4);
    if (iVar3 != 0) {
      cef_string_list_free(iVar3);
    }
  }
  local_8 = 0xffffffff;
  if (param_6 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_6 + 4) + 4) + param_6 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

