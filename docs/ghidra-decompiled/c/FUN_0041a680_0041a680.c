
void __thiscall FUN_0041a680(void *this,int param_1)

{
  void *pvVar1;
  void *pvVar2;
  errno_t eVar3;
  int iVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  int local_c;
  
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
    local_c = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0x10) < param_1) {
      local_c = param_1;
    }
    pvVar2 = (void *)Ordinal_265(local_c * 0x14);
    *(void **)((int)this + 4) = pvVar2;
    memset(pvVar2,0,local_c * 0x14);
    if (0 < param_1) {
      param_1 = 0;
      iVar4 = iVar5;
      do {
        iVar6 = *(int *)((int)this + 4) + param_1;
        if (iVar6 != 0) {
          Ordinal_296();
          *(undefined4 *)(iVar6 + 4) = 0;
          *(undefined4 *)(iVar6 + 8) = 0;
          Ordinal_296();
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
        param_1 = param_1 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(int *)((int)this + 8) = iVar5;
      *(int *)((int)this + 0xc) = local_c;
      return;
    }
  }
  else {
    iVar4 = *(int *)((int)this + 0xc);
    if (param_1 <= iVar4) {
      iVar4 = *(int *)((int)this + 8);
      if (iVar4 < param_1) {
        memset((void *)(*(int *)((int)this + 4) + iVar4 * 0x14),0,(param_1 - iVar4) * 0x14);
        iVar4 = 0;
        if (0 < param_1 - *(int *)((int)this + 8)) {
          do {
            iVar5 = *(int *)((int)this + 4) + (*(int *)((int)this + 8) + iVar4) * 0x14;
            if (iVar5 != 0) {
              FUN_004122a0(iVar5);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1 - *(int *)((int)this + 8));
          *(int *)((int)this + 8) = param_1;
          return;
        }
      }
      else if ((param_1 < iVar4) && (iVar4 = iVar4 - param_1, param_1 = 0, 0 < iVar4)) {
        do {
          Ordinal_1042();
          Ordinal_1042();
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)((int)this + 8) - iVar5);
        *(int *)((int)this + 8) = iVar5;
        return;
      }
      goto LAB_0041a92c;
    }
    iVar6 = *(int *)((int)this + 0x10);
    if (iVar6 == 0) {
      iVar6 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (iVar6 < 4) {
        iVar6 = 4;
      }
      else if (0x400 < iVar6) {
        iVar6 = 0x400;
      }
    }
    local_c = param_1;
    if (param_1 < iVar6 + iVar4) {
      local_c = iVar6 + iVar4;
    }
    iVar6 = local_c;
    if (local_c < iVar4) {
      Ordinal_2341();
      iVar6 = extraout_ECX;
    }
    pvVar2 = (void *)Ordinal_265(iVar6 * 0x14);
    eVar3 = memcpy_s(pvVar2,iVar6 * 0x14,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x14);
    FUN_004064a0(eVar3);
    memset((void *)((int)pvVar2 + *(int *)((int)this + 8) * 0x14),0,
           (param_1 - *(int *)((int)this + 8)) * 0x14);
    iVar4 = 0;
    if (0 < param_1 - *(int *)((int)this + 8)) {
      do {
        pvVar1 = (void *)((int)pvVar2 + (*(int *)((int)this + 8) + iVar4) * 0x14);
        if (pvVar1 != (void *)0x0) {
          FUN_004122a0((int)pvVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1 - *(int *)((int)this + 8));
    }
    Ordinal_266(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 4) = pvVar2;
  }
  *(int *)((int)this + 0xc) = local_c;
LAB_0041a92c:
  *(int *)((int)this + 8) = iVar5;
  return;
}

