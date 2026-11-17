
void __fastcall FUN_00401810(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(param_1 + 0x18f8);
  iVar3 = *(int *)(param_1 + 0x1004 + param_3 * 4);
  iVar6 = param_3 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar6 <= iVar7) {
    do {
      iVar7 = iVar6;
      if (bVar8 != iVar5 < 0) {
        uVar1 = *(ushort *)(param_2 + *(int *)(param_1 + 0x1008 + iVar6 * 4) * 4);
        uVar2 = *(ushort *)(param_2 + *(int *)(param_1 + 0x1004 + iVar6 * 4) * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(*(int *)(param_1 + 0x1008 + iVar6 * 4) + 0x1900 + param_1) <=
             *(byte *)(*(int *)(param_1 + 0x1004 + iVar6 * 4) + 0x1900 + param_1))))) {
          iVar7 = iVar6 + 1;
        }
      }
      iVar5 = *(int *)(param_1 + 0x1004 + iVar7 * 4);
      uVar1 = *(ushort *)(param_2 + iVar3 * 4);
      uVar2 = *(ushort *)(param_2 + iVar5 * 4);
      if (uVar1 < uVar2) {
        *(int *)(param_1 + 0x1004 + param_3 * 4) = iVar3;
        return;
      }
      if ((uVar1 == uVar2) &&
         (*(byte *)(iVar3 + 0x1900 + param_1) <= *(byte *)(iVar5 + 0x1900 + param_1))) break;
      *(int *)(param_1 + 0x1004 + param_3 * 4) = iVar5;
      iVar4 = *(int *)(param_1 + 0x18f8);
      iVar6 = iVar7 * 2;
      bVar8 = SBORROW4(iVar6,iVar4);
      iVar5 = iVar6 - iVar4;
      param_3 = iVar7;
    } while (iVar6 <= iVar4);
  }
  *(int *)(param_1 + 0x1004 + param_3 * 4) = iVar3;
  return;
}

