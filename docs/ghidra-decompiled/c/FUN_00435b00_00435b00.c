
undefined4 __thiscall FUN_00435b00(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004484b8;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x48) || (puVar1[0x11] == 0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = param_1;
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))(param_1,uVar2)
      ;
    }
    uVar3 = FUN_00436310(iVar4);
    uVar3 = (*(code *)puVar1[0x11])(puVar1,uVar3);
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return uVar3;
}

