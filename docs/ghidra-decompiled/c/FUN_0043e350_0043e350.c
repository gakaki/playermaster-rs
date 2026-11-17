
undefined4 * __thiscall
FUN_0043e350(void *this,int param_1,int param_2,int param_3,undefined1 *param_4,int param_5,
            int param_6,int param_7,uint *param_8)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined1 auStackY_d8 [128];
  int iVar4;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_24 [3];
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449288;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = param_8;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != (undefined1 *)0x0)) {
    local_8 = 0xffffffff;
    if (param_8 != (uint *)0x0) {
      local_11 = *param_8 != 0;
      uStack_3c = 0x43e3ec;
      piVar2 = FUN_0043c590(&param_1,param_1);
      piVar2 = (int *)*piVar2;
      local_8 = 5;
      uStack_3c = 0x43e407;
      FUN_0041eb00(local_24,param_7);
      local_8._0_1_ = 6;
      uStack_3c = (uint)(param_6 != 0);
      uStack_40 = (uint)(param_5 != 0);
      param_8 = &uStack_44;
      FUN_0041f760(&uStack_44,(int)param_4);
      param_4 = auStackY_d8 + 0x90;
      local_8._0_1_ = 7;
      FUN_0041f660((int *)(auStackY_d8 + 0x90),param_3);
      local_8._0_1_ = 8;
      FUN_0041f560((int *)(auStackY_d8 + 0x8c),param_2);
      local_8._0_1_ = 6;
      (**(code **)(*piVar2 + 8))();
      FUN_0040b8c0(local_24);
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_0040b900(&param_1);
      *puVar1 = (uint)(local_11 != '\0');
      iVar4 = extraout_ECX;
      FUN_00421b10(auStackY_d8 + 0x84,&local_18);
      puVar3 = FUN_00437f90(iVar4);
      local_8 = 0xffffffff;
      FUN_0040b900(&local_18);
      ExceptionList = local_10;
      return puVar3;
    }
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

