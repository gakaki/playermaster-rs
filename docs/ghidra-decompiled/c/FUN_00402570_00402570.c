
void __fastcall FUN_00402570(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  ushort *local_10;
  byte local_5;
  
  uVar5 = 0;
  local_14 = 0;
  local_5 = 0;
  if (param_1[0x6bcb] != 0) {
    local_10 = (ushort *)(param_1 + 0x27cb);
    do {
      if ((uVar5 & 7) == 0) {
        local_5 = *(byte *)(local_14 + 0x19f2c + (int)param_1);
        local_14 = local_14 + 1;
      }
      uVar6 = (uint)*(byte *)((int)param_1 + uVar5 + 0x1f2c);
      uVar5 = uVar5 + 1;
      if ((local_5 & 1) == 0) {
        uVar3 = (uint)*(ushort *)(param_2 + 2 + uVar6 * 4);
        uVar6 = (uint)*(ushort *)(param_2 + uVar6 * 4);
LAB_0040268a:
        FUN_00402780(param_1,uVar6,uVar3);
      }
      else {
        uVar4 = (uint)*(byte *)(uVar6 + 0x1b3d + (int)param_1);
        FUN_00402780(param_1,(uint)*(ushort *)(param_2 + 0x404 + uVar4 * 4),
                     (uint)*(ushort *)(param_2 + 0x406 + uVar4 * 4));
        if ((&DAT_0044cfb0)[uVar4] != 0) {
          FUN_00402780(param_1,uVar6 - param_1[uVar4 + 0x790],(&DAT_0044cfb0)[uVar4]);
        }
        uVar1 = *local_10;
        uVar6 = (uint)uVar1;
        local_10 = local_10 + 1;
        if (uVar6 < 0x100) {
          bVar2 = *(byte *)(uVar6 + 0x1c3d + (int)param_1);
        }
        else {
          bVar2 = *(byte *)((uVar1 >> 7) + 0x1d3d + (int)param_1);
        }
        uVar4 = (uint)bVar2;
        if (0x1d < uVar4) {
          param_1[0x1abe9] = "bad d_code";
        }
        FUN_00402780(param_1,(uint)*(ushort *)(param_3 + uVar4 * 4),
                     (uint)*(ushort *)(param_3 + 2 + uVar4 * 4));
        uVar3 = (&DAT_0044cf30)[uVar4];
        if (uVar3 != 0) {
          uVar6 = uVar6 - param_1[uVar4 + 0x7ad];
          goto LAB_0040268a;
        }
      }
      local_5 = local_5 >> 1;
    } while (uVar5 < (uint)param_1[0x6bcb]);
  }
  FUN_00402780(param_1,(uint)*(ushort *)(param_2 + 0x400),(uint)*(ushort *)(param_2 + 0x402));
  return;
}

