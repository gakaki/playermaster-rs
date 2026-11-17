
void __thiscall FUN_00419bf0(void *this,int param_1)

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
  
  iVar6 = param_1;
  uVar7 = param_1 == 0;
  if (param_1 < 0) {
    Ordinal_2341();
  }
  if ((bool)uVar7) {
    if (*(int *)((int)this + 4) != 0) {
      iVar6 = 0;
      if (0 < *(int *)((int)this + 8)) {
        iVar5 = 0;
        do {
          FUN_00419b30(*(int *)((int)this + 4) + iVar5);
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x40;
        } while (iVar6 < *(int *)((int)this + 8));
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
    pvVar1 = (void *)Ordinal_265(local_8 << 6);
    *(void **)((int)this + 4) = pvVar1;
    memset(pvVar1,0,local_8 << 6);
    if (0 < param_1) {
      iVar5 = 0;
      do {
        puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar5);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00411b10(puVar4);
        }
        iVar5 = iVar5 + 0x40;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      *(int *)((int)this + 8) = iVar6;
      *(int *)((int)this + 0xc) = local_8;
      return;
    }
  }
  else {
    iVar5 = *(int *)((int)this + 0xc);
    if (param_1 <= iVar5) {
      iVar5 = *(int *)((int)this + 8);
      if (iVar5 < param_1) {
        memset((void *)(iVar5 * 0x40 + *(int *)((int)this + 4)),0,(param_1 - iVar5) * 0x40);
        iVar5 = 0;
        if (0 < param_1 - *(int *)((int)this + 8)) {
          do {
            puVar4 = (undefined4 *)
                     ((*(int *)((int)this + 8) + iVar5) * 0x40 + *(int *)((int)this + 4));
            if (puVar4 != (undefined4 *)0x0) {
              FUN_00411b10(puVar4);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_1 - *(int *)((int)this + 8));
          *(int *)((int)this + 8) = param_1;
          return;
        }
      }
      else if (param_1 < iVar5) {
        iVar5 = iVar5 - param_1;
        param_1 = 0;
        if (0 < iVar5) {
          iVar5 = iVar6 << 6;
          do {
            FUN_00419b30(*(int *)((int)this + 4) + iVar5);
            iVar5 = iVar5 + 0x40;
            param_1 = param_1 + 1;
          } while (param_1 < *(int *)((int)this + 8) - iVar6);
          *(int *)((int)this + 8) = iVar6;
          return;
        }
      }
      goto LAB_00419e24;
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
    if (param_1 < iVar2 + iVar5) {
      local_8 = iVar2 + iVar5;
    }
    iVar2 = local_8;
    if (local_8 < iVar5) {
      Ordinal_2341();
      iVar2 = extraout_ECX;
    }
    pvVar1 = (void *)Ordinal_265(iVar2 << 6);
    eVar3 = memcpy_s(pvVar1,iVar2 << 6,*(void **)((int)this + 4),*(int *)((int)this + 8) << 6);
    FUN_004064a0(eVar3);
    memset((void *)(*(int *)((int)this + 8) * 0x40 + (int)pvVar1),0,
           (param_1 - *(int *)((int)this + 8)) * 0x40);
    iVar5 = 0;
    if (0 < param_1 - *(int *)((int)this + 8)) {
      do {
        puVar4 = (undefined4 *)((*(int *)((int)this + 8) + iVar5) * 0x40 + (int)pvVar1);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_00411b10(puVar4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1 - *(int *)((int)this + 8));
    }
    Ordinal_266(*(undefined4 *)((int)this + 4));
    *(void **)((int)this + 4) = pvVar1;
  }
  *(int *)((int)this + 0xc) = local_8;
LAB_00419e24:
  *(int *)((int)this + 8) = iVar6;
  return;
}

