
void __thiscall
FUN_004406b0(void *this,int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            uint *param_5)

{
  uint uVar1;
  int *piVar2;
  int local_c0;
  char local_b9;
  undefined **local_b8;
  undefined1 local_b4 [156];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449706;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_b4 + 0xb0);
  ExceptionList = &local_10;
  local_14 = uVar1;
  CGridCellBase::EndEdit(this);
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) ||
     (local_8 = 0xffffffff, param_5 == (uint *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    local_b8 = &PTR_FUN_0044c274;
    memset(local_b4,0,0x9c);
    local_18 = 0;
    local_8 = 3;
    FUN_00440670(&local_b8,param_2,0);
    local_b9 = *param_5 != 0;
    piVar2 = FUN_0043c590(&local_c0,param_1);
    local_8._0_1_ = 4;
    (*(code *)**(undefined4 **)*piVar2)(&local_b8,param_3,param_4,&local_b9,uVar1);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (local_c0 != 0) {
      (**(code **)(*(int *)(local_c0 + 4 + *(int *)(*(int *)(local_c0 + 4) + 4)) + 4))();
    }
    *param_5 = (uint)(local_b9 != '\0');
    FUN_004405a0(&local_b8);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_b4 + 0xb0));
  return;
}

