
undefined1 __thiscall
FUN_004379b0(void *this,int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_108;
  undefined4 local_e8 [50];
  undefined4 local_20 [3];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044893b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar4 = param_5;
  piVar1 = param_4;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (param_4 != (int *)0x0) {
      if (param_5 != (undefined4 *)0x0) {
        local_14 = 0;
        local_8 = 5;
        if (*param_4 != 0) {
          piVar3 = FUN_0042f950((int *)&param_4,*param_4);
          local_8._0_1_ = 6;
          FUN_0043bc50(&local_14,piVar3);
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_0040b900((int *)&param_4);
        }
        iVar5 = local_14;
        FUN_00437150(local_e8);
        local_8._0_1_ = 7;
        FUN_00437390(local_e8,puVar4);
        piVar3 = FUN_0043c590((int *)&param_4,param_1);
        piVar3 = (int *)*piVar3;
        iStack_108 = 0x437abd;
        FUN_0041eb00(local_20,param_3);
        local_8._0_1_ = 9;
        FUN_0042faa0(&iStack_108,param_2);
        uVar2 = (**(code **)(*piVar3 + 0xc))();
        FUN_0040b8c0(local_20);
        local_8 = CONCAT31(local_8._1_3_,7);
        FUN_0040b900((int *)&param_4);
        if (local_14 == 0) {
          *piVar1 = 0;
        }
        else if (local_14 != iVar5) {
          iVar5 = local_14;
          FUN_00421b10(local_e8 + -9,&local_14);
          puVar4 = FUN_0042fd80(iVar5);
          *piVar1 = (int)puVar4;
        }
        FUN_00437420(local_e8,param_5);
        FUN_00437260(local_e8);
        local_8 = 0xffffffff;
        FUN_0040b900(&local_14);
        ExceptionList = local_10;
        return uVar2;
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

