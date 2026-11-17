
undefined1 __thiscall
FUN_00437b60(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 *param_8,int *param_9,undefined4 *param_10)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined1 auStackY_1e8 [128];
  int iVar5;
  int iStack_158;
  int iStack_154;
  undefined4 local_12c [50];
  undefined4 local_64 [17];
  undefined4 local_20 [3];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004489a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar4 = param_10;
  piVar1 = param_9;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 != 0 && (param_6 != 0))))
  {
    if (param_8 != (undefined4 *)0x0) {
      if (param_9 != (int *)0x0) {
        local_8 = 0xffffffff;
        if (param_10 != (undefined4 *)0x0) {
          FUN_00437230(local_64);
          local_8 = 8;
          FUN_004373d0(local_64,param_8);
          local_14 = 0;
          local_8._0_1_ = 9;
          if (*piVar1 != 0) {
            piVar3 = FUN_0042f950((int *)&param_9,*piVar1);
            local_8._0_1_ = 10;
            FUN_0043bc50(&local_14,piVar3);
            local_8._0_1_ = 9;
            FUN_0040b900((int *)&param_9);
          }
          iVar5 = local_14;
          FUN_00437150(local_12c);
          local_8._0_1_ = 0xb;
          FUN_00437390(local_12c,puVar4);
          piVar3 = FUN_0043c590((int *)&param_9,param_1);
          piVar3 = (int *)*piVar3;
          iStack_154 = 0x437cb9;
          FUN_0041eb00(local_20,param_6);
          iStack_154 = param_5;
          local_8._0_1_ = 0xd;
          FUN_0041f560(&iStack_158,param_4);
          local_8._0_1_ = 0xe;
          FUN_0041f560((int *)(auStackY_1e8 + 0x8c),param_3);
          local_8._0_1_ = 0xf;
          FUN_0042faa0((int *)(auStackY_1e8 + 0x88),param_2);
          local_8._0_1_ = 0xd;
          uVar2 = (**(code **)(*piVar3 + 0x10))();
          FUN_0040b8c0(local_20);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          FUN_0040b900((int *)&param_9);
          FUN_00437480(local_64,param_8);
          if (local_14 == 0) {
            *piVar1 = 0;
          }
          else if (local_14 != iVar5) {
            iVar5 = extraout_ECX;
            FUN_00421b10(auStackY_1e8 + 0x84,&local_14);
            puVar4 = FUN_0042fd80(iVar5);
            *piVar1 = (int)puVar4;
          }
          FUN_00437420(local_12c,param_10);
          FUN_00437260(local_12c);
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_0040b900(&local_14);
          FUN_00437280(local_64);
          ExceptionList = local_10;
          return uVar2;
        }
      }
    }
  }
  ExceptionList = local_10;
  return 0;
}

