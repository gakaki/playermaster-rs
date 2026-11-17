
void __thiscall FUN_00433360(void *this,int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x3f < *puVar1) && (puVar1[0xf] != 0)) {
    puVar4 = (undefined4 *)0x0;
    uVar5 = param_1[1] - *param_1 >> 4;
    if ((uVar5 != 0) &&
       ((puVar4 = (undefined4 *)
                  Ordinal_265(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar5 * 8)), puVar4 != (undefined4 *)0x0 &&
        (uVar5 != 0)))) {
      iVar6 = 0;
      puVar3 = puVar4;
      local_8 = uVar5;
      do {
        if (*param_1 + iVar6 == 0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = (undefined4 *)(*param_1 + iVar6 + 4);
        }
        iVar6 = iVar6 + 0x10;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3 = puVar3 + 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    (*(code *)puVar1[0xf])(puVar1,uVar5,puVar4);
    if (puVar4 != (undefined4 *)0x0) {
      Ordinal_266(puVar4);
    }
  }
  return;
}

