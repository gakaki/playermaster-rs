
void __thiscall FUN_00421010(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00449458;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((0x3b < *puVar1) && (puVar1[0xe] != 0)) && (local_8 = 0, param_1 != 0)) {
    iVar4 = param_1;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))(param_1,uVar2);
    puVar3 = FUN_004219d0(iVar4);
    (*(code *)puVar1[0xe])(puVar1,puVar3);
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

