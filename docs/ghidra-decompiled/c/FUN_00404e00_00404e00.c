
undefined4 __fastcall FUN_00404e00(void *param_1)

{
  void *pvVar1;
  bool bVar2;
  void *this;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  iVar5 = *(int *)((int)param_1 + 0x18);
  this = *(void **)((int)param_1 + 0x44);
  bVar3 = true;
  while (this != (void *)0x0) {
    bVar2 = false;
    if (bVar3) {
      iVar4 = FUN_00403800(this,param_1);
      bVar2 = true;
      if (iVar4 != 0) {
        bVar2 = false;
      }
    }
    local_8 = local_8 + 1;
    *(int *)((int)param_1 + 0x18) =
         *(int *)((int)param_1 + 0x18) +
         *(int *)((int)this + 0x18) + 0x2e + *(int *)((int)this + 0x24) + *(int *)((int)this + 0x20)
    ;
    pvVar1 = *(void **)((int)this + 0x35c);
    if (*(int *)((int)this + 0x140) != 0) {
      Ordinal_266(*(int *)((int)this + 0x140));
    }
    Ordinal_1508(this);
    this = pvVar1;
    bVar3 = bVar2;
  }
  if (bVar3) {
    iVar5 = FUN_00403c10(local_8,*(int *)((int)param_1 + 0x18) - iVar5,
                         *(int *)((int)param_1 + 0x10) + iVar5);
    *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + 0x16;
    if (iVar5 == 0) {
      return 0;
    }
  }
  return 0x400;
}

