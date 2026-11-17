
void __thiscall FUN_00432fd0(void *this,CGridCellBase *param_1)

{
  CGridCellBase *this_00;
  uint uVar1;
  CGridCellBase **ppCVar2;
  undefined4 *puVar3;
  CGridCellBase *pCVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  CGridCellBase *pCVar8;
  undefined **local_2c;
  undefined8 local_28;
  undefined4 local_20;
  uint *local_1c;
  CGridCellBase *local_18;
  CGridCellBase *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004486a8;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_1c = (uint *)0x0;
  local_18 = this;
  CGridCellBase::EndEdit(this);
  this_00 = param_1;
  puVar6 = *(uint **)(local_18 + -4);
  if ((0x47 < *puVar6) && (puVar6[0x11] != 0)) {
    pCVar8 = (CGridCellBase *)(*(int *)(param_1 + 4) - *(int *)param_1 >> 4);
    param_1 = pCVar8;
    local_1c = puVar6;
    local_18 = (CGridCellBase *)(**(code **)(*(int *)local_18 + 0x2c))(uVar1);
    ppCVar2 = &param_1;
    if (pCVar8 <= local_18) {
      ppCVar2 = &local_18;
    }
    local_14 = *ppCVar2;
    param_1 = (CGridCellBase *)0x0;
    if (local_14 != (CGridCellBase *)0x0) {
      param_1 = (CGridCellBase *)
                Ordinal_265(-(uint)((int)(ZEXT48(local_14) * 8 >> 0x20) != 0) |
                            (uint)(ZEXT48(local_14) * 8));
      local_8 = 0xffffffff;
      if (param_1 != (CGridCellBase *)0x0) {
        memset(param_1,0,(int)local_14 << 3);
        if (pCVar8 != (CGridCellBase *)0x0) {
          iVar5 = 0;
          pCVar4 = param_1;
          do {
            if (*(int *)this_00 + iVar5 == 0) {
              puVar3 = (undefined4 *)0x0;
            }
            else {
              puVar3 = (undefined4 *)(*(int *)this_00 + iVar5 + 4);
            }
            iVar5 = iVar5 + 0x10;
            *(undefined4 *)pCVar4 = *puVar3;
            *(undefined4 *)(pCVar4 + 4) = puVar3[1];
            pCVar4 = pCVar4 + 8;
            pCVar8 = pCVar8 + -1;
          } while (pCVar8 != (CGridCellBase *)0x0);
          puVar6 = local_1c;
        }
      }
    }
    (*(code *)puVar6[0x11])(puVar6,&local_14,param_1);
    puVar3 = *(undefined4 **)(this_00 + 4);
    pCVar8 = param_1;
    for (puVar7 = *(undefined4 **)this_00; param_1 = pCVar8, puVar7 != puVar3; puVar7 = puVar7 + 4)
    {
      (**(code **)*puVar7)(0);
      pCVar8 = param_1;
    }
    *(undefined4 *)(this_00 + 4) = *(undefined4 *)this_00;
    if ((local_14 != (CGridCellBase *)0x0) && (pCVar8 != (CGridCellBase *)0x0)) {
      pCVar4 = (CGridCellBase *)0x0;
      if (local_14 != (CGridCellBase *)0x0) {
        do {
          local_28 = *(undefined8 *)pCVar8;
          local_20 = 0;
          local_2c = &PTR_FUN_0044bd28;
          local_8 = 1;
          FUN_004335f0(this_00,(uint)&local_2c);
          pCVar4 = pCVar4 + 1;
          local_8 = 0xffffffff;
          pCVar8 = pCVar8 + 8;
          local_2c = &PTR_FUN_0044bd28;
        } while (pCVar4 < local_14);
      }
      Ordinal_266(param_1);
    }
  }
  ExceptionList = local_10;
  return;
}

