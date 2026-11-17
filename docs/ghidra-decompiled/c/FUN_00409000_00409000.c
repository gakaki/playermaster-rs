
undefined4 __thiscall FUN_00409000(void *this,POINT *param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x98) != 0) {
    iVar3 = 0x4e0;
    do {
      puVar2 = (undefined4 *)(*(int *)((int)this + 0x98) + iVar3);
      if ((puVar2 != (undefined4 *)0x0) && (puVar2[8] != 0)) {
        BVar1 = PtInRect((RECT *)(puVar2 + 3),*param_1);
        if (BVar1 != 0) {
          return *puVar2;
        }
      }
      iVar3 = iVar3 + -0x68;
    } while (-1 < iVar3);
  }
  return 0xffffffff;
}

