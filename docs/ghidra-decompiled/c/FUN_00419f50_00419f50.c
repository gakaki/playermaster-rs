
void __thiscall FUN_00419f50(void *this,int param_1)

{
  void *pvVar1;
  errno_t eVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  void *pvVar5;
  int iVar6;
  undefined1 uVar7;
  int local_8;
  
  iVar4 = param_1;
  uVar7 = param_1 == 0;
  if (param_1 < 0) {
    Ordinal_2341();
  }
  if ((bool)uVar7) {
    if (*(int *)((int)this + 4) != 0) {
      param_1 = 0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          Ordinal_1042();
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)((int)this + 8));
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
    pvVar1 = (void *)Ordinal_265(local_8 * 0x30);
    *(void **)((int)this + 4) = pvVar1;
    memset(pvVar1,0,local_8 * 0x30);
    if (0 < param_1) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)((int)this + 4) + iVar6;
        if (iVar3 != 0) {
          FUN_004119c0(iVar3);
        }
        iVar6 = iVar6 + 0x30;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      *(int *)((int)this + 8) = iVar4;
      *(int *)((int)this + 0xc) = local_8;
      return;
    }
  }
  else {
    iVar6 = *(int *)((int)this + 0xc);
    if (param_1 <= iVar6) {
      iVar6 = *(int *)((int)this + 8);
      if (iVar6 < param_1) {
        memset((void *)(iVar6 * 0x30 + *(int *)((int)this + 4)),0,(param_1 - iVar6) * 0x30);
        iVar6 = 0;
        if (0 < param_1 - *(int *)((int)this + 8)) {
          do {
            iVar4 = (*(int *)((int)this + 8) + iVar6) * 0x30 + *(int *)((int)this + 4);
            if (iVar4 != 0) {
              FUN_004119c0(iVar4);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_1 - *(int *)((int)this + 8));
          *(int *)((int)this + 8) = param_1;
          return;
        }
      }
      else if ((param_1 < iVar6) && (iVar6 = iVar6 - param_1, param_1 = 0, 0 < iVar6)) {
        iVar6 = iVar4 * 0x30;
        do {
          FUN_00419b90(*(int *)((int)this + 4) + iVar6);
          iVar6 = iVar6 + 0x30;
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)((int)this + 8) - iVar4);
        *(int *)((int)this + 8) = iVar4;
        return;
      }
      goto LAB_0041a207;
    }
    iVar3 = *(int *)((int)this + 0x10);
    if (iVar3 == 0) {
      iVar3 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
      if (iVar3 < 4) {
        iVar3 = 4;
      }
      else if (0x400 < iVar3) {
        iVar3 = 0x400;
      }
    }
    local_8 = param_1;
    if (param_1 < iVar3 + iVar6) {
      local_8 = iVar3 + iVar6;
    }
    iVar3 = local_8;
    if (local_8 < iVar6) {
      Ordinal_2341();
      iVar3 = extraout_ECX;
    }
    pvVar1 = (void *)Ordinal_265(iVar3 * 0x30);
    eVar2 = memcpy_s(pvVar1,iVar3 * 0x30,*(void **)((int)this + 4),*(int *)((int)this + 8) * 0x30);
    FUN_004064a0(eVar2);
    memset((void *)(*(int *)((int)this + 8) * 0x30 + (int)pvVar1),0,
           (param_1 - *(int *)((int)this + 8)) * 0x30);
    iVar6 = 0;
    if (0 < param_1 - *(int *)((int)this + 8)) {
      do {
        pvVar5 = (void *)((*(int *)((int)this + 8) + iVar6) * 0x30 + (int)pvVar1);
        if (pvVar5 != (void *)0x0) {
          FUN_004119c0((int)pvVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1 - *(int *)((int)this + 8));
    }
    Ordinal_266(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
  }
  *(int *)((int)this + 0xc) = local_8;
LAB_0041a207:
  *(int *)((int)this + 8) = iVar4;
  return;
}

