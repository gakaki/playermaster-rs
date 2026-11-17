
undefined4 __thiscall FUN_00404680(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_EDX;
  
  if (*(int *)((int)this + 0x48) == 0) {
    iVar1 = Ordinal_1506(0x6afa8);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_00401090(iVar1 + 0x14);
      *(undefined4 *)(extraout_EDX + 0x6af70) = 0;
      iVar1 = extraout_EDX;
    }
    *(int *)((int)this + 0x48) = iVar1;
  }
  *(undefined4 *)(*(int *)((int)this + 0x48) + 0x6afa4) = 0;
  *(code **)(*(int *)((int)this + 0x48) + 0xc) = FUN_00404550;
  *(code **)(*(int *)((int)this + 0x48) + 0x10) = FUN_00404140;
  **(undefined4 **)((int)this + 0x48) = this;
  *(undefined4 *)(*(int *)((int)this + 0x48) + 4) = 8;
  *(undefined1 *)(*(int *)((int)this + 0x48) + 8) = *(undefined1 *)((int)this + 0x60);
  *(undefined4 *)(*(int *)((int)this + 0x48) + 0x6afa4) = 0;
  *(undefined2 *)(*(int *)((int)this + 0x48) + 0xe7e) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x48) + 0x6af70) = 0;
  iVar1 = *(int *)((int)this + 0x48);
  *(int *)(iVar1 + 0x1af60) = (int)this + 0x88;
  *(undefined4 *)(iVar1 + 0x1af68) = 0x4000;
  *(undefined4 *)(iVar1 + 0x1af64) = 0;
  *(undefined4 *)(iVar1 + 0x1af54) = 1;
  *(undefined4 *)(iVar1 + 0x1af58) = 0;
  *(undefined4 *)(iVar1 + 0x1af5c) = 0;
  *(undefined4 *)(iVar1 + 0x1af6c) = 0;
  FUN_004014b0(*(int *)((int)this + 0x48),param_1 + 0x2a);
  FUN_00402a50(*(int *)((int)this + 0x48),*(int *)(*(int *)((int)this + 0x48) + 4),
               (ushort *)(param_1 + 4));
  uVar2 = FUN_00403100(*(undefined4 **)((int)this + 0x48));
  *(undefined4 *)((int)this + 0x84) = uVar2;
  uVar2 = 0;
  if (*(int *)(*(int *)((int)this + 0x48) + 0x6afa4) != 0) {
    uVar2 = 0x5000000;
  }
  return uVar2;
}

