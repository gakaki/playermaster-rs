
bool __thiscall FUN_004222d0(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448058;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x6c) || (puVar1[0x1a] == 0)) || (local_8 = 0, param_1 == 0)) {
    bVar5 = false;
  }
  else {
    iVar4 = param_1;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))(param_1,uVar2);
    uVar3 = FUN_004224a0(iVar4);
    iVar4 = (*(code *)puVar1[0x1a])(puVar1,uVar3);
    bVar5 = iVar4 != 0;
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4 + param_1) + 4))();
  }
  ExceptionList = local_10;
  return bVar5;
}

