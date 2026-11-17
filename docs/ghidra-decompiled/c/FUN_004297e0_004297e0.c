
bool __thiscall
FUN_004297e0(void *this,int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  uint *puVar1;
  int *this_00;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_4;
  puStack_c = &LAB_00448000;
  local_10 = ExceptionList;
  puVar1 = *(uint **)((int)this + -4);
  if ((0x37 < *puVar1) && (puVar1[0xd] != 0)) {
    local_8 = 0xffffffff;
    if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 4) != 0)) {
      local_14 = 0;
      iVar5 = *param_4;
      ExceptionList = &local_10;
      if (iVar5 != 0) {
        (*(code *)**(undefined4 **)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)))
                  (iVar5,DAT_0046400c ^ (int)register0x00000010 - 4U);
        local_14 = FUN_0041fac0(iVar5);
      }
      iVar2 = local_14;
      this_00 = param_5;
      local_18 = (int *)0x0;
      param_4 = (int *)0x0;
      iVar5 = *param_5;
      if (iVar5 != 0) {
        (*(code *)**(undefined4 **)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)))();
        local_18 = (int *)FUN_00429c40(iVar5);
      }
      param_4 = local_18;
      param_2 = (*(code *)puVar1[0xd])
                          (puVar1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4),param_3,
                           &local_14,&param_4);
      if (local_14 == 0) {
        iVar5 = *piVar4;
        *piVar4 = 0;
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)) + 4))();
        }
      }
      else if (local_14 != iVar2) {
        piVar3 = FUN_0041fb60(&param_1,local_14);
        local_8 = 1;
        FUN_0043bc50(piVar4,piVar3);
        local_8 = 0xffffffff;
        FUN_0040b900(&param_1);
      }
      if (param_4 == (int *)0x0) {
        iVar5 = *this_00;
        *this_00 = 0;
        if (iVar5 != 0) {
          (**(code **)(*(int *)(iVar5 + 4 + *(int *)(*(int *)(iVar5 + 4) + 4)) + 4))();
        }
      }
      else if (param_4 != local_18) {
        piVar4 = FUN_00423fa0((int *)&param_5,(int)param_4);
        local_8 = 2;
        FUN_0043bc50(this_00,piVar4);
        local_8 = 0xffffffff;
        FUN_0040b900((int *)&param_5);
        ExceptionList = local_10;
        return param_2 != 0;
      }
      ExceptionList = local_10;
      return param_2 != 0;
    }
  }
  return false;
}

