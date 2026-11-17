
void __thiscall FUN_0042e9c0(void *this,int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
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
  if (((0xcf < *puVar1) && (puVar1[0x33] != 0)) && (local_8 = 0, param_1 != 0)) {
    if (param_2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_2 + 4;
    }
    iVar5 = param_1;
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))
                (param_1,iVar4,param_3,uVar2);
    }
    uVar3 = FUN_0042f8b0(iVar5);
    (*(code *)puVar1[0x33])(puVar1,uVar3);
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return;
}

