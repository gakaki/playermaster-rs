
void __thiscall FUN_004302d0(void *this,int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *this_00;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
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
  ExceptionList = &local_10;
  puVar2 = *(uint **)((int)this + -4);
  if ((0x23 < *puVar2) && (puVar2[8] != 0)) {
    uVar6 = param_1[1] - *param_1 >> 2;
    local_18 = uVar6;
    local_14 = (**(code **)(*(int *)this + 8))(DAT_0046400c ^ (int)register0x00000010 - 4U);
    puVar5 = &local_18;
    if (uVar6 <= local_14) {
      puVar5 = &local_14;
    }
    _Dst = (void *)0x0;
    local_14 = *puVar5;
    if (local_14 != 0) {
      _Dst = (void *)Ordinal_265(-(uint)((int)((ulonglong)local_14 * 4 >> 0x20) != 0) |
                                 (uint)((ulonglong)local_14 * 4));
      local_8 = 0xffffffff;
      if (((_Dst != (void *)0x0) && (memset(_Dst,0,local_14 << 2), uVar6 != 0)) &&
         (uVar7 = 0, uVar6 != 0)) {
        do {
          iVar1 = uVar7 * 4;
          iVar8 = *(int *)(*param_1 + iVar1);
          if (iVar8 != 0) {
            (*(code *)**(undefined4 **)(iVar8 + *(int *)(*(int *)(iVar8 + 4) + 4) + 4))();
          }
          uVar3 = FUN_004305c0(iVar8);
          uVar7 = uVar7 + 1;
          *(undefined4 *)(iVar1 + (int)_Dst) = uVar3;
        } while (uVar7 < uVar6);
      }
    }
    (*(code *)puVar2[8])(puVar2,&local_14,_Dst);
    this_00 = param_1;
    FUN_00430760(param_1);
    if ((local_14 != 0) && (_Dst != (void *)0x0)) {
      uVar6 = 0;
      if (local_14 != 0) {
        do {
          piVar4 = FUN_00430660((int *)&param_1,*(int *)((int)_Dst + uVar6 * 4));
          local_8 = 1;
          FUN_0043e130(this_00,piVar4);
          local_8 = 0xffffffff;
          if (param_1 != (int *)0x0) {
            (**(code **)(*(int *)((int)param_1 + *(int *)(param_1[1] + 4) + 4) + 4))();
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_14);
      }
      Ordinal_266(_Dst);
    }
  }
  ExceptionList = local_10;
  return;
}

