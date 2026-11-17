
void __thiscall FUN_0040e5e0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)((int)this + 0x9c) != 0) && (*(int *)((int)this + 0xa4) != 0)) {
    ScreenToClient(*(HWND *)((int)this + 0x20),(LPPOINT)&param_2);
    param_3 = param_3 + *(int *)((int)*(void **)((int)this + 0x9c) + 4);
    iVar1 = FUN_00409000(*(void **)((int)this + 0x9c),(POINT *)&param_2);
    if (((iVar1 == 0) || (iVar1 == 2)) && (*(int *)(*(int *)((int)this + 0x9c) + 8) == 0)) {
      *(undefined4 *)(*(int *)((int)this + 0x9c) + 8) = 1;
      FUN_00406740(*(int *)((int)this + 0xa4));
    }
  }
  Ordinal_3790();
  return;
}

