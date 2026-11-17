
bool __thiscall FUN_00436630(void *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448808;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x24) || (puVar1[8] == 0)) || (local_8 = 0, param_1 == (int *)0x0)) {
    bVar4 = false;
  }
  else {
    piVar5 = param_1;
    (**(code **)*param_1)(param_1,uVar2);
    iVar3 = FUN_00436770(piVar5);
    iVar3 = (*(code *)puVar1[8])(puVar1,iVar3);
    bVar4 = iVar3 != 0;
  }
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

