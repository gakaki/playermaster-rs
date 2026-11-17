
void __thiscall FUN_00419330(void *this,uint param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004470e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 == 0) {
LAB_00419390:
    local_8 = 0;
    FUN_0041bd90(*(int *)this,*(int *)((int)this + 4),pvVar2);
    iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x30;
    if (*(int *)this != 0) {
      iVar3 = iVar1;
      iVar4 = iVar1;
      FUN_0041b1f0(*(int *)this,*(int *)((int)this + 4));
      Ordinal_1508(*(undefined4 *)this,iVar3,iVar4);
    }
    *(void **)this = pvVar2;
    *(void **)((int)this + 8) = (void *)(param_1 * 0x30 + (int)pvVar2);
    *(void **)((int)this + 4) = (void *)(iVar1 * 0x30 + (int)pvVar2);
    ExceptionList = local_10;
    return;
  }
  if (param_1 < 0x5555556) {
    pvVar2 = (void *)Ordinal_1506(param_1 * 0x30);
    if (pvVar2 != (void *)0x0) goto LAB_00419390;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}

