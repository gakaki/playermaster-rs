
undefined4 __thiscall FUN_0040d2d0(void *this,int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 5) {
    if (param_2 == 0) {
      if (*(int *)((int)this + 0x138) != 0) {
        Ordinal_2708(0);
        RedrawWindow(*(HWND *)((int)this + 0x20),(RECT *)0x0,(HRGN)0x0,0x101);
      }
      *(undefined4 *)(*(int *)((int)this + 0x9c) + 8) = 0;
      iVar1 = *(int *)((int)this + 0xa4);
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar2 != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 0x98) + 0x498) = 0;
        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 0x98) + 0x430) = 1;
      }
      *(undefined4 *)((int)this + 0x138) = 0;
      uVar3 = Ordinal_14447(5,0,param_3);
      return uVar3;
    }
    if ((param_2 == 2) && (*(int *)(*(int *)((int)this + 0x9c) + 8) == 0)) {
      *(undefined4 *)(*(int *)((int)this + 0x9c) + 8) = 1;
      FUN_00406740(*(int *)((int)this + 0xa4));
      uVar3 = Ordinal_14447(5,2,param_3);
      return uVar3;
    }
  }
  else if (param_1 == 0x100) {
    if (param_2 == 0xd) {
      return 0;
    }
  }
  else if ((param_1 == 0xae) || (param_1 == 0xaf)) {
    FUN_0040d3f0((int)this);
    return 0;
  }
  uVar3 = Ordinal_14447(param_1,param_2,param_3);
  return uVar3;
}

