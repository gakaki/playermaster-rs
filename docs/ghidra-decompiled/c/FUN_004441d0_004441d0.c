
void __thiscall FUN_004441d0(void *this,int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *this_00;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00449978;
  local_10 = ExceptionList;
  uVar3 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  CGridCellBase::EndEdit(this);
  puVar2 = *(uint **)((int)this + -4);
  if ((0x3b < *puVar2) && (puVar2[0xe] != 0)) {
    uVar7 = param_1[1] - *param_1 >> 2;
    local_18 = uVar7;
    local_14 = (**(code **)(*(int *)this + 0x1c))(uVar3);
    puVar6 = &local_18;
    if (uVar7 <= local_14) {
      puVar6 = &local_14;
    }
    _Dst = (void *)0x0;
    local_14 = *puVar6;
    if (local_14 != 0) {
      _Dst = (void *)Ordinal_265(-(uint)((int)((ulonglong)local_14 * 4 >> 0x20) != 0) |
                                 (uint)((ulonglong)local_14 * 4));
      local_8 = 0xffffffff;
      if (((_Dst != (void *)0x0) && (memset(_Dst,0,local_14 << 2), uVar7 != 0)) &&
         (uVar3 = 0, uVar7 != 0)) {
        do {
          iVar1 = uVar3 * 4;
          iVar8 = *(int *)(*param_1 + iVar1);
          if (iVar8 != 0) {
            (*(code *)**(undefined4 **)(iVar8 + *(int *)(*(int *)(iVar8 + 4) + 4) + 4))();
          }
          uVar4 = FUN_004200a0(iVar8);
          uVar3 = uVar3 + 1;
          *(undefined4 *)(iVar1 + (int)_Dst) = uVar4;
        } while (uVar3 < uVar7);
      }
    }
    (*(code *)puVar2[0xe])(puVar2,&local_14,_Dst);
    this_00 = param_1;
    FUN_00430760(param_1);
    if ((local_14 != 0) && (_Dst != (void *)0x0)) {
      uVar3 = 0;
      if (local_14 != 0) {
        do {
          piVar5 = FUN_0041e640((int *)&param_1,*(int *)((int)_Dst + uVar3 * 4));
          local_8 = 1;
          FUN_0043e130(this_00,piVar5);
          local_8 = 0xffffffff;
          if (param_1 != (int *)0x0) {
            (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 4) + 4))();
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_14);
      }
      Ordinal_266(_Dst);
    }
  }
  ExceptionList = local_10;
  return;
}

