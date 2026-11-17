
void __thiscall
FUN_0043bf90(void *this,int param_1,int param_2,int param_3,undefined1 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9,
            int *param_10,undefined4 *param_11,int *param_12,uint *param_13)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iStack_1e4;
  undefined1 auStack_1b6 [2];
  undefined4 local_1a8 [50];
  undefined4 local_e0 [17];
  undefined4 local_9c [3];
  undefined4 local_90 [3];
  int local_84;
  undefined1 *local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 *local_64;
  uint *local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_4e;
  char local_4d;
  undefined4 local_4c [14];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448f24;
  local_10 = ExceptionList;
  local_14 = DAT_0046400c ^ (uint)(local_4c + 0x12);
  ExceptionList = &local_10;
  local_70 = param_1;
  local_78 = param_2;
  local_7c = param_3;
  local_80 = param_4;
  local_84 = param_5;
  local_64 = param_9;
  local_6c = param_11;
  local_60 = param_13;
  local_54 = 0;
  CGridCellBase::EndEdit(this);
  if ((((((local_70 == 0) || (local_78 == 0)) || (local_7c == 0)) ||
       ((param_8 == (undefined4 *)0x0 || (local_64 == (undefined4 *)0x0)))) ||
      ((param_10 == (int *)0x0 || ((param_11 == (undefined4 *)0x0 || (param_12 == (int *)0x0))))))
     || (local_8 = 0xffffffff, local_60 == (uint *)0x0)) {
    local_8 = 0xffffffff;
  }
  else {
    FUN_0043bb80(local_4c);
    local_8 = 9;
    FUN_0043bd00(local_4c,param_8);
    FUN_00437230(local_e0);
    FUN_004373d0(local_e0,local_64);
    local_68 = 0;
    local_58 = 0;
    local_8._0_1_ = 0xb;
    if (*param_10 != 0) {
      piVar1 = FUN_0042f950(&local_54,*param_10);
      local_8._0_1_ = 0xc;
      FUN_0043bc50(&local_58,piVar1);
      local_8._0_1_ = 0xb;
      FUN_0040b900(&local_54);
    }
    local_68 = local_58;
    FUN_00437150(local_1a8);
    FUN_00437390(local_1a8,param_11);
    local_54 = 0;
    local_5c = 0;
    local_8._0_1_ = 0xe;
    if (*param_12 != 0) {
      piVar1 = FUN_00422540(&local_54,*param_12);
      local_8._0_1_ = 0xf;
      FUN_0043bc50(&local_5c,piVar1);
      local_8._0_1_ = 0xe;
      FUN_0040b900(&local_54);
      local_54 = local_5c;
    }
    local_4d = *local_60 != 0;
    local_5c = local_54;
    piVar1 = FUN_0043c590(&local_74,local_70);
    puVar2 = (undefined4 *)*piVar1;
    FUN_0041eb00(local_9c,local_84);
    iStack_1e4 = 0x43c1a3;
    FUN_0041eb00(local_90,(int)local_80);
    local_80 = (undefined1 *)&iStack_1e4;
    local_8._0_1_ = 0x12;
    FUN_0041f660(&iStack_1e4,local_7c);
    local_8._0_1_ = 0x13;
    FUN_0041f560((int *)(auStack_1b6 + -0x32),local_78);
    local_8._0_1_ = 0x12;
    local_4e = (**(code **)*puVar2)();
    FUN_0040b8c0(local_90);
    FUN_0040b8c0(local_9c);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_0040b900(&local_74);
    FUN_00437480(local_e0,local_64);
    if (local_58 == 0) {
      *param_10 = 0;
    }
    else if (local_58 != local_68) {
      iVar3 = extraout_ECX;
      FUN_00421b10(auStack_1b6 + -6,&local_58);
      puVar2 = FUN_0042fd80(iVar3);
      *param_10 = (int)puVar2;
    }
    FUN_00437420(local_1a8,local_6c);
    if (local_5c == 0) {
      *param_12 = 0;
    }
    else if (local_5c != local_54) {
      iVar3 = extraout_ECX_00;
      FUN_00421b10(auStack_1b6 + -6,&local_5c);
      iVar3 = FUN_00422400(iVar3);
      *param_12 = iVar3;
    }
    local_8._0_1_ = 0xd;
    *local_60 = (uint)(local_4d != '\0');
    FUN_0040b900(&local_5c);
    FUN_00437260(local_1a8);
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_0040b900(&local_58);
    FUN_00437280(local_e0);
  }
  ExceptionList = local_10;
  FUN_0041d025(local_14 ^ (uint)(local_4c + 0x12));
  return;
}

