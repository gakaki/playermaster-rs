
int * __thiscall FUN_00427200(void *this,int *param_1,int param_2,int *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447db1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = *(uint **)((int)this + -4);
  local_8 = 1;
  if ((*puVar1 < 0xcc) || (puVar1[0x32] == 0)) {
    *param_1 = 0;
  }
  else {
    iVar4 = 0;
    uVar6 = param_3[1] - *param_3 >> 2;
    if (uVar6 != 0) {
      iVar4 = Ordinal_265(-(uint)((int)((ulonglong)uVar6 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar6 * 4),DAT_0046400c ^ (int)register0x00000010 - 4U);
      local_8 = 1;
      if ((iVar4 != 0) && (uVar5 = 0, uVar6 != 0)) {
        do {
          iVar3 = *(int *)(*param_3 + uVar5 * 4);
          if (iVar3 != 0) {
            (*(code *)**(undefined4 **)(iVar3 + *(int *)(*(int *)(iVar3 + 4) + 4) + 4))();
          }
          uVar2 = FUN_0041fac0(iVar3);
          *(undefined4 *)(iVar4 + uVar5 * 4) = uVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
    }
    iVar3 = param_2;
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_2 + 4) + 4) + param_2 + 4))
                (param_2,uVar6,iVar4);
    }
    uVar2 = FUN_0041fac0(iVar3);
    iVar3 = (*(code *)puVar1[0x32])(puVar1,uVar2);
    if (iVar4 != 0) {
      Ordinal_266(iVar4);
    }
    FUN_0041fb60(param_1,iVar3);
  }
  local_8 = local_8 & 0xffffff00;
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

