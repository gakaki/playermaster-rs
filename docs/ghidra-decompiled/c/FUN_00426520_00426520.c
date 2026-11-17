
void __thiscall FUN_00426520(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (*(undefined4 **)this <= param_1)) {
    iVar3 = (int)param_1 - (int)*(undefined4 **)this >> 3;
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004264a0(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(iVar2 + 4 + iVar3 * 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004264a0(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}

