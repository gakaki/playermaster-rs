
bool __thiscall FUN_00429b00(void *this,int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448058;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x34) || (puVar1[0xc] == 0)) || (local_8 = 0, param_1 == 0)) {
    bVar4 = false;
  }
  else {
    iVar3 = param_1;
    (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4))
              (param_1,DAT_0046400c ^ (int)register0x00000010 - 4U);
    uVar2 = FUN_00428090(iVar3);
    iVar3 = (*(code *)puVar1[0xc])(puVar1,uVar2);
    bVar4 = iVar3 != 0;
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4 + param_1) + 4))();
  }
  ExceptionList = local_10;
  return bVar4;
}

