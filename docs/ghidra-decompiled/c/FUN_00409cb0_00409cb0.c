
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00409cb0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int iVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445fd9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(param_1 + 0xb8);
  iVar8 = iVar4 - *(int *)(param_1 + 0xac);
  iVar2 = iVar8 / 10;
  iVar3 = (iVar8 * 8) / 0x46;
  fVar11 = GetDpi();
  iVar6 = (int)(fVar11 * _DAT_0044fee4);
  GetDpi();
  Ordinal_286(&DAT_0044d16c);
  local_8 = 0;
  iVar8 = *(int *)(param_1 + 0xb4);
  iVar12 = *(int *)(param_1 + 0xac);
  uVar15 = 0;
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x98);
  uVar14 = 0;
  fVar11 = GetDpi();
  local_8 = 0xffffffff;
  (*(code *)*puVar1)(1,*(undefined4 *)(param_1 + 0x15c),0,0,0,iVar8 - iVar12,
                     (int)(fVar11 * _DAT_0044fef8),uVar14,uVar15);
  *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x3c) = 0x40024;
  fVar11 = GetDpi();
  iVar10 = (int)(fVar11 * _DAT_0044ff0c);
  fVar11 = GetDpi();
  iVar9 = (int)(fVar11 * _DAT_0044ff24);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x14))
            (*(undefined4 *)(param_1 + 0x15c),1,iVar2,iVar10,iVar9,iVar6,2,
             *(int *)(param_1 + 0x268) != 0);
  iVar8 = **(int **)(param_1 + 0x98);
  uVar7 = (uint)(*(int *)(param_1 + 0x268) == 0);
  uVar14 = 2;
  iVar12 = iVar9;
  iVar13 = iVar6;
  fVar11 = GetDpi();
  (**(code **)(iVar8 + 0x14))
            (*(undefined4 *)(param_1 + 0x15c),2,(iVar9 - (int)(fVar11 * _DAT_0044ff58)) + iVar2,
             iVar10,iVar12,iVar13,uVar14,uVar7);
  fVar11 = GetDpi();
  fVar11 = fVar11 * _DAT_0044fed8;
  Ordinal_286(L"ImageButton\\blue\\",extraout_ECX,0xffffff,0,4);
  (**(code **)(**(int **)(param_1 + 0x98) + 0x2c))
            (*(undefined4 *)(param_1 + 0x15c),3,(iVar4 + iVar3 * -2) - iVar2,
             (iVar5 - (int)fVar11) - iVar6,iVar3 * 2,iVar6);
  ExceptionList = local_10;
  return;
}

