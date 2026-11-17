
void __thiscall FUN_00419250(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004470c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)0x0;
  if (param_1 == 0) {
LAB_004192b2:
    local_8 = 0;
    FUN_0041bc90(*(undefined4 **)this,*(undefined4 **)((int)this + 4),puVar2);
    iVar3 = *(int *)this;
    uVar1 = *(int *)((int)this + 4) - iVar3;
    if (iVar3 != 0) {
      uVar4 = param_1;
      FUN_0041b180(iVar3,*(int *)((int)this + 4));
      Ordinal_1508(*(undefined4 *)this,iVar3,uVar4);
    }
    *(undefined4 **)((int)this + 8) = puVar2 + param_1 * 0x10;
    *(uint *)((int)this + 4) = (uVar1 & 0xffffffc0) + (int)puVar2;
    *(undefined4 **)this = puVar2;
    ExceptionList = local_10;
    return;
  }
  if (param_1 < 0x4000000) {
    puVar2 = (undefined4 *)Ordinal_1506(param_1 << 6);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004192b2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}

