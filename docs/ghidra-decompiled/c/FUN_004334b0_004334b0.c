
void __thiscall FUN_004334b0(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)0x0;
  if ((param_1 != 0) &&
     ((0xfffffff < param_1 ||
      (puVar3 = (undefined4 *)Ordinal_1506(param_1 << 4), puVar3 == (undefined4 *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  FUN_00432cc0(*(int *)this,*(int *)((int)this + 4),puVar3);
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar4 = *(undefined4 **)this;
  iVar2 = (int)puVar1 - (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 4) {
      (**(code **)*puVar4)(0);
    }
    Ordinal_1508(*(undefined4 *)this);
  }
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 4;
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 4) = puVar3 + (iVar2 >> 4) * 4;
  return;
}

