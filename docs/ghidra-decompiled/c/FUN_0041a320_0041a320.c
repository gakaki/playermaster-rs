
void __thiscall FUN_0041a320(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  errno_t eVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int local_8;
  
  iVar5 = param_1;
  uVar7 = param_1 == 0;
  if (param_1 < 0) {
    Ordinal_2341();
  }
  if ((bool)uVar7) {
    if (*(int *)((int)this + 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          Ordinal_1042();
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 8));
      }
      Ordinal_266(*(undefined4 *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  if (*(int *)((int)this + 4) == 0) {
    local_8 = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0x10) < param_1) {
      local_8 = param_1;
    }
    pvVar1 = (void *)Ordinal_265(local_8 * 0x38);
    *(void **)((int)this + 4) = pvVar1;
    memset(pvVar1,0,local_8 * 0x38);
    if (0 < param_1) {
      iVar6 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar6);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_004122d0(puVar4);
        }
        iVar6 = iVar6 + 0x38;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      *(int *)((int)this + 8) = iVar5;
      *(int *)((int)this + 0xc) = local_8;
      return;
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0xc);
    if (param_1 <= iVar6) {
      iVar6 = *(int *)((int)this + 8);
      if (iVar6 < param_1) {
        memset((void *)(*(int *)((int)this + 4) + iVar6 * 0x38),0,(param_1 - iVar6) * 0x38);
        iVar6 = 0;
        if (0 < param_1 - *(int *)((int)this + 8)) {
          do {
            puVar4 = (undefined4 *)
                     (*(int *)((int)this + 4) + (*(int *)((int)this + 8) + iVar6) * 0x38);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_004122d0(puVar4);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_1 - *(int *)((int)this + 8));
          *(int *)((int)this + 8) = param_1;
          return;
        }
      }
      else if ((param_1 < iVar6) && (iVar6 = iVar6 - param_1, param_1 = 0, 0 < iVar6)) {
        do {
          Ordinal_1042();
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)((int)this + 8) - iVar5);
        *(int *)((int)this + 8) = iVar5;
        return;
      }
      goto LAB_0041a5c2;
    }
    iVar2 = *(int *)((int)this + 0x10);
    if (iVar2 == 0) {
      iVar2 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (iVar2 < 4) {
        iVar2 = 4;
      }
      else if (0x400 < iVar2) {
        iVar2 = 0x400;
      }
    }
    local_8 = param_1;
    if (param_1 < iVar2 + iVar6) {
      local_8 = iVar2 + iVar6;
    }
    iVar2 = local_8;
    if (local_8 < iVar6) {
      Ordinal_2341();
      iVar2 = extraout_ECX;
    }
    pvVar1 = (void *)Ordinal_265(iVar2 * 0x38);
    eVar3 = memcpy_s(pvVar1,iVar2 * 0x38,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x38);
    FUN_004064a0(eVar3);
    memset((void *)((int)pvVar1 + *(int *)((int)this + 8) * 0x38),0,
           (param_1 - *(int *)((int)this + 8)) * 0x38);
    iVar6 = 0;
    if (0 < param_1 - *(int *)((int)this + 8)) {
      do {
        puVar4 = (undefined4 *)((int)pvVar1 + (*(int *)((int)this + 8) + iVar6) * 0x38);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_004122d0(puVar4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1 - *(int *)((int)this + 8));
    }
    Ordinal_266(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
  }
  *(int *)((int)this + 0xc) = local_8;
LAB_0041a5c2:
  *(int *)((int)this + 8) = iVar5;
  return;
}

