
undefined4 __thiscall FUN_0040d5c0(void *this,int param_1)

{
  ICustomControl *pIVar1;
  CCurSorManager *this_00;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) == 0xa1) || (*(int *)(param_1 + 4) == 0xa4)) {
    pIVar1 = ColorLightControl_GetInterface();
    this_00 = (CCurSorManager *)(**(code **)(*(int *)pIVar1 + 8))(0);
    if ((this_00 != (CCurSorManager *)0x0) &&
       (iVar2 = CCurSorManager::AutoInvalidAddTileState(this_00,*(uint *)(param_1 + 4)), iVar2 != 0)
       ) {
      return 1;
    }
  }
  if ((*(int *)(param_1 + 4) == 0x100) &&
     ((*(int *)(param_1 + 8) == 0xd || (*(int *)(param_1 + 8) == 0x1b)))) {
    return 1;
  }
  FUN_0040d520((int)this);
  SendMessageW(*(HWND *)((int)this + 0x15c),0x407,0,param_1);
  uVar3 = Ordinal_12047(param_1);
  return uVar3;
}

