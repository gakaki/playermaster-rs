
void __fastcall FUN_00401ec0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_c;
  ushort *local_8;
  
  local_c = 0xffffffff;
  iVar2 = 7;
  iVar1 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar1 = 3;
  }
  if (-1 < param_3) {
    local_8 = (ushort *)(param_2 + 6);
    param_3 = param_3 + 1;
    uVar3 = (uint)*(ushort *)(param_2 + 2);
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      uVar4 = (uint)*local_8;
      if ((iVar2 <= iVar6) || (uVar3 != uVar4)) {
        if (iVar6 < iVar1) {
          do {
            FUN_00402780(param_1,(uint)*(ushort *)(param_1 + uVar3 + 0x3bd),
                         (uint)*(ushort *)((int)param_1 + uVar3 * 4 + 0xef6));
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        else {
          if (uVar3 == 0) {
            if (iVar6 < 0xb) {
              FUN_00402780(param_1,(uint)*(ushort *)(param_1 + 0x3ce),
                           (uint)*(ushort *)((int)param_1 + 0xf3a));
              iVar1 = 3;
              uVar7 = iVar5 - 2;
            }
            else {
              FUN_00402780(param_1,(uint)*(ushort *)(param_1 + 0x3cf),
                           (uint)*(ushort *)((int)param_1 + 0xf3e));
              iVar1 = 7;
              uVar7 = iVar5 - 10;
            }
          }
          else {
            if (uVar3 != local_c) {
              FUN_00402780(param_1,(uint)*(ushort *)(param_1 + uVar3 + 0x3bd),
                           (uint)*(ushort *)((int)param_1 + uVar3 * 4 + 0xef6));
              iVar6 = iVar5;
            }
            uVar7 = iVar6 - 3;
            if (3 < uVar7) {
              param_1[0x1abe9] = " 3_6?";
            }
            FUN_00402780(param_1,(uint)*(ushort *)(param_1 + 0x3cd),
                         (uint)*(ushort *)((int)param_1 + 0xf36));
            iVar1 = 2;
          }
          FUN_00402780(param_1,uVar7,iVar1);
        }
        iVar6 = 0;
        local_c = uVar3;
        if (uVar4 == 0) {
          iVar2 = 0x8a;
          iVar1 = 3;
        }
        else if (uVar3 == uVar4) {
          iVar2 = 6;
          iVar1 = 3;
        }
        else {
          iVar2 = 7;
          iVar1 = 4;
        }
      }
      local_8 = local_8 + 2;
      param_3 = param_3 + -1;
      uVar3 = uVar4;
      iVar5 = iVar6;
    } while (param_3 != 0);
  }
  return;
}

