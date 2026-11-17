
void __thiscall FUN_00425ea0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 *_Dst;
  undefined4 *puVar5;
  undefined4 *local_c;
  undefined4 *local_8;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x5f < *puVar1) && (puVar1[0x17] != 0)) {
    puVar5 = (undefined4 *)(param_1[1] - *param_1 >> 3);
    local_c = puVar5;
    local_8 = (undefined4 *)(**(code **)(*(int *)this + 0x44))();
    ppuVar3 = &local_c;
    if (puVar5 <= local_8) {
      ppuVar3 = &local_8;
    }
    _Dst = (undefined4 *)0x0;
    local_8 = *ppuVar3;
    local_c = (undefined4 *)0x0;
    if ((((local_8 != (undefined4 *)0x0) &&
         (_Dst = (undefined4 *)
                 Ordinal_265(-(uint)((int)(ZEXT48(local_8) * 8 >> 0x20) != 0) |
                             (uint)(ZEXT48(local_8) * 8)), local_c = _Dst, _Dst != (undefined4 *)0x0
         )) && (memset(_Dst,0,(int)local_8 << 3), puVar5 != (undefined4 *)0x0)) &&
       (puVar4 = (undefined4 *)0x0, puVar5 != (undefined4 *)0x0)) {
      do {
        iVar2 = *param_1;
        _Dst[(int)puVar4 * 2] = *(undefined4 *)(iVar2 + (int)puVar4 * 8);
        _Dst[(int)puVar4 * 2 + 1] = *(undefined4 *)(iVar2 + 4 + (int)puVar4 * 8);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      } while (puVar4 < puVar5);
    }
    (*(code *)puVar1[0x17])(puVar1,&local_8,_Dst);
    param_1[1] = *param_1;
    if ((local_8 != (undefined4 *)0x0) && (_Dst != (undefined4 *)0x0)) {
      if (local_8 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
        do {
          FUN_00426520(param_1,_Dst);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          _Dst = _Dst + 2;
        } while (puVar5 < local_8);
        _Dst = local_c;
      }
      Ordinal_266(_Dst);
    }
  }
  return;
}

