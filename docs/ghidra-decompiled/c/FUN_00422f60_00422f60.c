
void __thiscall FUN_00422f60(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)0x0;
  if ((param_1 != 0) &&
     ((0x15555555 < param_1 ||
      (puVar3 = (undefined4 *)Ordinal_1506(param_1 * 0xc), puVar3 == (undefined4 *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  FUN_00422d70(*(int **)this,*(int **)((int)this + 4),puVar3);
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar4 = *(undefined4 **)this;
  iVar2 = (int)puVar1 - (int)puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
      (**(code **)*puVar4)(0);
    }
    Ordinal_1508(*(undefined4 *)this);
  }
  *(undefined4 **)this = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_1 * 3;
  *(undefined4 **)((int)this + 4) = puVar3 + (iVar2 / 0xc) * 3;
  return;
}

