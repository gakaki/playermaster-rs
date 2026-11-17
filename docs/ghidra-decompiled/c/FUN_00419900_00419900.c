
void __thiscall FUN_00419900(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  rsize_t _DstSize;
  errno_t eVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  if ((((param_1 < 0) || (iVar4 = *(int *)((int)this + 8), iVar4 < iVar1)) || (iVar1 < param_1)) ||
     (iVar1 < 1)) {
    Ordinal_2341();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_00419b90(*(int *)((int)this + 4) + param_1 * 0x30);
  iVar4 = iVar4 - iVar1;
  if (iVar4 != 0) {
    _DstSize = iVar4 * 0x30;
    eVar3 = memmove_s((void *)(param_1 * 0x30 + *(int *)((int)this + 4)),_DstSize,
                      (void *)(iVar1 * 0x30 + *(int *)((int)this + 4)),_DstSize);
    FUN_004064a0(eVar3);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return;
}

