
void __thiscall
FUN_0043ba40(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 param_4,uint *param_5
            )

{
  undefined4 *puVar1;
  int *piVar2;
  int iStack_6c;
  undefined ***pppuStack_68;
  int local_4c [3];
  int local_40;
  undefined1 local_3a;
  char local_39;
  undefined **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448e60;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_4c + 0x12);
  ExceptionList = &local_10;
  local_40 = param_1;
  local_4c[2] = param_4;
  local_4c[1] = 0;
  CGridCellBase::EndEdit(this);
  if ((local_40 != 0) && (param_2 != 0)) {
    if ((param_3 != (undefined4 *)0x0) && (param_5 != (uint *)0x0)) {
      local_38 = &PTR_FUN_0044bd28;
      local_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      local_1c = 0;
      local_24 = 0;
      local_18 = 0;
      local_8 = 4;
      pppuStack_68 = (undefined ***)0x43baf7;
      FUN_0043b8d0(&local_38,param_3);
      local_39 = *param_5 != 0;
      pppuStack_68 = (undefined ***)0x43bb0a;
      piVar2 = FUN_0043c590(local_4c,local_40);
      puVar1 = (undefined4 *)*piVar2;
      pppuStack_68 = &local_38;
      local_8._0_1_ = 5;
      FUN_0041f560(&iStack_6c,param_2);
      local_3a = (**(code **)*puVar1)();
      local_8 = CONCAT31(local_8._1_3_,4);
      if (local_4c[0] != 0) {
        (**(code **)(*(int *)(local_4c[0] + 4 + *(int *)(*(int *)(local_4c[0] + 4) + 4)) + 4))();
      }
      *param_5 = (uint)(local_39 != '\0');
      goto LAB_0043bb61;
    }
  }
  local_8 = 0xffffffff;
LAB_0043bb61:
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_4c + 0x12));
  return;
}

