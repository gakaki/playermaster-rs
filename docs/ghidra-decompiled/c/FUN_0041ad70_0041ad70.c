
int __fastcall FUN_0041ad70(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  void *local_2c;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447218;
  local_10 = ExceptionList;
  uVar5 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  if (param_1 == param_2) {
    return param_3;
  }
  local_14 = (int *)(param_1 + 0x18);
  local_1c = param_3;
  puVar7 = (uint *)(param_3 + 0x18);
  iVar1 = (param_1 - param_3) + -0x18;
  ExceptionList = &local_10;
  do {
    Ordinal_1518(iVar1 + (int)puVar7,uVar5);
    Ordinal_1518(local_14 + -5);
    Ordinal_1518(local_14 + -4);
    Ordinal_1518(local_14 + -2);
    Ordinal_1518(local_14 + -3);
    FUN_0041b1f0(puVar7[-1],*puVar7);
    *puVar7 = puVar7[-1];
    iVar6 = local_14[-1];
    local_18 = 0;
    iVar4 = *local_14 - iVar6 >> 0x1f;
    if ((*local_14 - iVar6) / 0x30 + iVar4 != iVar4) {
      param_3 = 0;
      do {
        local_20 = iVar6 + param_3;
        uVar2 = *puVar7;
        if ((local_20 < uVar2) && (uVar3 = puVar7[-1], uVar3 <= local_20)) {
          if (uVar2 == puVar7[1]) {
            FUN_00418c40((int *)(puVar7 + -1));
          }
          local_20 = ((int)(local_20 - uVar3) / 0x30) * 0x30 + puVar7[-1];
          local_2c = (void *)*puVar7;
          local_8 = 0;
          if (local_2c != (void *)0x0) {
            Ordinal_296();
            Ordinal_296();
            *(undefined4 *)((int)local_2c + 4) = 0;
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            local_8 = CONCAT31(local_8._1_3_,4);
LAB_0041af68:
            FUN_00411a30(local_2c,local_20);
          }
        }
        else {
          if (uVar2 == puVar7[1]) {
            FUN_00418c40((int *)(puVar7 + -1));
          }
          local_2c = (void *)*puVar7;
          local_8 = 5;
          if (local_2c != (void *)0x0) {
            Ordinal_296();
            Ordinal_296();
            *(undefined4 *)((int)local_2c + 4) = 0;
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            Ordinal_296();
            local_8 = CONCAT31(local_8._1_3_,9);
            goto LAB_0041af68;
          }
        }
        local_8 = 0xffffffff;
        local_18 = local_18 + 1;
        *puVar7 = *puVar7 + 0x30;
        iVar6 = local_14[-1];
        param_3 = param_3 + 0x30;
      } while (local_18 < (uint)((*local_14 - iVar6) / 0x30));
    }
    puVar7 = puVar7 + 8;
    local_1c = local_1c + 0x20;
    local_14 = local_14 + 8;
    if (iVar1 + (int)puVar7 == param_2) {
      ExceptionList = local_10;
      return local_1c;
    }
  } while( true );
}

