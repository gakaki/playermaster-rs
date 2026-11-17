
int * __thiscall FUN_00431630(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448501;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  local_8 = 1;
  if ((*puVar1 < 0x2c) || (puVar1[10] == 0)) {
    *param_1 = 0;
  }
  else {
    iVar3 = param_2;
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                (param_2,DAT_0046400c ^ (int)register0x00000010 - 4U);
    }
    puVar2 = FUN_0041e8e0(iVar3);
    iVar3 = (*(code *)puVar1[10])(puVar1,puVar2);
    FUN_00431f80(param_1,iVar3);
  }
  local_8 = local_8 & 0xffffff00;
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

