
bool __thiscall FUN_00427e30(void *this,int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447e28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  local_8 = 0;
  if ((*puVar1 < 0xa8) || (puVar1[0x29] == 0)) {
    bVar4 = false;
  }
  else {
    piVar5 = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)*param_1)(param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    puVar2 = FUN_00428400(piVar5);
    iVar3 = (*(code *)puVar1[0x29])(puVar1,puVar2);
    bVar4 = iVar3 != 0;
  }
  local_8 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

