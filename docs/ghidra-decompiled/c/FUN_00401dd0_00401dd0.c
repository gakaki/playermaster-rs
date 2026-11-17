
void __fastcall FUN_00401dd0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_c;
  ushort *local_8;
  
  uVar2 = *(ushort *)(param_2 + 2);
  local_c = 0xffffffff;
  iVar3 = 7;
  iVar7 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)(param_2 + 6 + param_3 * 4) = 0xffff;
  iVar6 = 0;
  if (-1 < param_3) {
    local_8 = (ushort *)(param_2 + 6);
    param_3 = param_3 + 1;
    uVar4 = (uint)uVar2;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = (uint)*local_8;
      if ((iVar3 <= iVar6) || (uVar4 != uVar5)) {
        if (iVar6 < iVar7) {
          psVar1 = (short *)(param_1 + 0xef4 + uVar4 * 4);
          *psVar1 = *psVar1 + (short)iVar6;
        }
        else if (uVar4 == 0) {
          if (iVar6 < 0xb) {
            *(short *)(param_1 + 0xf38) = *(short *)(param_1 + 0xf38) + 1;
          }
          else {
            *(short *)(param_1 + 0xf3c) = *(short *)(param_1 + 0xf3c) + 1;
          }
        }
        else {
          if (uVar4 != local_c) {
            psVar1 = (short *)(param_1 + 0xef4 + uVar4 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xf34) = *(short *)(param_1 + 0xf34) + 1;
        }
        iVar6 = 0;
        local_c = uVar4;
        if (uVar5 == 0) {
          iVar3 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar4 == uVar5) {
          iVar3 = 6;
          iVar7 = 3;
        }
        else {
          iVar3 = 7;
          iVar7 = 4;
        }
      }
      local_8 = local_8 + 2;
      param_3 = param_3 + -1;
      uVar4 = uVar5;
    } while (param_3 != 0);
  }
  return;
}

