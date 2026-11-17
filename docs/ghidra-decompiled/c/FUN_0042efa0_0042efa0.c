
void __thiscall FUN_0042efa0(void *this,int param_1,int *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xbf < *puVar1) && (puVar1[0x2f] != 0)) {
    puVar11 = (undefined4 *)0x0;
    uVar2 = (param_2[1] - *param_2) / 0x1c;
    if ((uVar2 != 0) &&
       ((puVar11 = (undefined4 *)
                   Ordinal_265(-(uint)((int)((ulonglong)uVar2 * 0x14 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar2 * 0x14)), puVar11 != (undefined4 *)0x0 &&
        (uVar2 != 0)))) {
      iVar9 = 0;
      puVar8 = puVar11;
      uVar10 = uVar2;
      do {
        if (*param_2 + iVar9 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)(*param_2 + iVar9 + 4);
        }
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        iVar9 = iVar9 + 0x1c;
        *puVar8 = *puVar6;
        puVar8[1] = uVar3;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        puVar8[4] = puVar6[4];
        puVar8 = puVar8 + 5;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (param_4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = param_4 + 4;
    }
    if (param_3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = param_3 + 4;
    }
    (*(code *)puVar1[0x2f])(puVar1,*(undefined4 *)(param_1 + 4),uVar2,puVar11,iVar7,iVar9);
    if (puVar11 != (undefined4 *)0x0) {
      Ordinal_266(puVar11);
    }
  }
  return;
}

