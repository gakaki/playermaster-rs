
void __thiscall FUN_004230d0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *this_00;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447a62;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      FUN_00423030(this,1);
    }
    iVar5 = *(int *)this;
    this_00 = *(undefined4 **)((int)this + 4);
    local_8 = 0;
    if (this_00 == (undefined4 *)0x0) goto LAB_004231b4;
    *this_00 = CefStringBase<CefStringTraitsUTF16>::vftable;
    this_00[1] = 0;
    *(undefined1 *)(this_00 + 2) = 0;
    piVar3 = *(int **)(iVar5 + ((int)(param_1 - uVar2) / 0xc) * 0xc + 4);
    if (piVar3 == (int *)0x0) {
LAB_0042319f:
      iVar5 = 0;
    }
    else {
      iVar5 = piVar3[1];
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      FUN_00423030(this,1);
    }
    this_00 = *(undefined4 **)((int)this + 4);
    local_8 = 1;
    if (this_00 == (undefined4 *)0x0) goto LAB_004231b4;
    *this_00 = CefStringBase<CefStringTraitsUTF16>::vftable;
    this_00[1] = 0;
    *(undefined1 *)(this_00 + 2) = 0;
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 == (int *)0x0) goto LAB_0042319f;
    iVar5 = piVar3[1];
  }
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  FUN_0041e530(this_00,iVar4,iVar5,1);
LAB_004231b4:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  ExceptionList = local_10;
  return;
}

