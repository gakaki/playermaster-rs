
int __fastcall FUN_0041aa70(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *this;
  undefined4 *puVar9;
  undefined4 *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447178;
  local_10 = ExceptionList;
  uVar4 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  if (param_1 != param_2) {
    local_24 = (int *)(param_1 + 0x28);
    local_1c = param_3;
    puVar8 = (uint *)(param_3 + 0x28);
    local_20 = param_1;
    do {
      Ordinal_1518(local_20,uVar4);
      Ordinal_1518(local_24 + -9);
      Ordinal_1518(local_24 + -8);
      puVar8[-7] = local_24[-7];
      puVar8[-6] = local_24[-6];
      puVar8[-4] = local_24[-4];
      puVar8[-3] = local_24[-3];
      Ordinal_1518(local_24 + -2);
      FUN_0041b180(puVar8[-1],*puVar8);
      *puVar8 = puVar8[-1];
      iVar5 = local_24[-1];
      local_14 = 0;
      if (*local_24 - iVar5 >> 6 != 0) {
        local_18 = 0;
        do {
          puVar1 = (undefined4 *)*puVar8;
          puVar9 = (undefined4 *)(local_18 + iVar5);
          if ((puVar9 < puVar1) && (puVar2 = (undefined4 *)puVar8[-1], puVar2 <= puVar9)) {
            puVar3 = (undefined4 *)puVar8[1];
            if ((puVar1 == puVar3) && ((int)puVar3 - (int)puVar1 >> 6 == 0)) {
              iVar5 = (int)puVar1 - (int)puVar2 >> 6;
              if (iVar5 == 0x3ffffff) {
LAB_0041ad63:
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar6 = iVar5 + 1;
              uVar7 = (int)puVar3 - (int)puVar2 >> 6;
              if (0x3ffffff - (uVar7 >> 1) < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar6) {
                uVar7 = uVar6;
              }
              FUN_00419250(puVar8 + -1,uVar7);
            }
            puVar9 = (undefined4 *)(((int)puVar9 - (int)puVar2 & 0xffffffc0U) + puVar8[-1]);
            local_28 = (undefined4 *)*puVar8;
            local_8 = 0;
            if (local_28 != (undefined4 *)0x0) {
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              *local_28 = 0;
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              local_8 = CONCAT31(local_8._1_3_,4);
LAB_0041acf0:
              FUN_00411ba0(local_28,puVar9);
            }
          }
          else {
            this = puVar8 + -1;
            puVar2 = (undefined4 *)puVar8[1];
            if ((puVar1 == puVar2) && ((int)puVar2 - (int)puVar1 >> 6 == 0)) {
              iVar5 = (int)((int)puVar1 - *this) >> 6;
              if (iVar5 == 0x3ffffff) goto LAB_0041ad63;
              uVar6 = iVar5 + 1;
              uVar7 = (int)((int)puVar2 - *this) >> 6;
              if (0x3ffffff - (uVar7 >> 1) < uVar7) {
                uVar7 = 0;
              }
              else {
                uVar7 = uVar7 + (uVar7 >> 1);
              }
              if (uVar7 < uVar6) {
                uVar7 = uVar6;
              }
              FUN_00419250(this,uVar7);
            }
            local_28 = (undefined4 *)*puVar8;
            local_8 = 5;
            if (local_28 != (undefined4 *)0x0) {
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              *local_28 = 0;
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              Ordinal_296();
              local_8 = CONCAT31(local_8._1_3_,9);
              goto LAB_0041acf0;
            }
          }
          local_14 = local_14 + 1;
          local_8 = 0xffffffff;
          local_18 = local_18 + 0x40;
          *puVar8 = *puVar8 + 0x40;
          iVar5 = local_24[-1];
        } while (local_14 < (uint)(*local_24 - iVar5 >> 6));
      }
      local_24 = local_24 + 0xc;
      local_20 = local_20 + 0x30;
      param_3 = local_1c + 0x30;
      puVar8 = puVar8 + 0xc;
      local_1c = param_3;
    } while (local_20 != param_2);
  }
  ExceptionList = local_10;
  return param_3;
}

