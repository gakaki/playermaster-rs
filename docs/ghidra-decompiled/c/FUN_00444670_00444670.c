
void __thiscall FUN_00444670(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)0x0;
  if ((param_1 != 0) &&
     ((0x3fffffff < param_1 || (piVar4 = (int *)Ordinal_1506(param_1 << 2), piVar4 == (int *)0x0))))
  {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  FUN_0043da00(*(int **)this,*(int **)((int)this + 4),piVar4);
  piVar1 = *(int **)((int)this + 4);
  piVar5 = *(int **)this;
  iVar3 = (int)piVar1 - (int)piVar5;
  if (piVar5 != (int *)0x0) {
    for (; piVar5 != piVar1; piVar5 = piVar5 + 1) {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + *(int *)(*(int *)(iVar2 + 4) + 4) + 4) + 4))();
      }
    }
    Ordinal_1508(*(undefined4 *)this);
  }
  *(int **)this = piVar4;
  *(int **)((int)this + 8) = piVar4 + param_1;
  *(int **)((int)this + 4) = piVar4 + (iVar3 >> 2);
  return;
}

