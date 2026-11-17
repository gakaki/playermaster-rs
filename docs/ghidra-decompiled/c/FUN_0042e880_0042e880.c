
void __thiscall
FUN_0042e880(void *this,int param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
            int param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448318;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x4b < *puVar1) && (puVar1[0x12] != 0)) && (*(int *)(param_1 + 4) != 0)) &&
     ((*(int *)(*(int *)(param_1 + 4) + 4) != 0 && (local_8 = 0, param_5 != 0)))) {
    iVar4 = param_5;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_5 + 4) + 4) + param_5 + 4))(param_5,uVar2);
    puVar3 = FUN_0042fe20(iVar4);
    (*(code *)puVar1[0x12])(puVar1,*(undefined4 *)(param_1 + 4),param_2,param_3,param_4,puVar3);
  }
  local_8 = 0xffffffff;
  if (param_5 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_5 + 4) + 4) + param_5 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

