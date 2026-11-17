
bool __fastcall FUN_0043f240(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + -0x14);
  if (*(int *)(iVar1 + 0xc) == 0) {
    return false;
  }
  iVar1 = (**(code **)(iVar1 + 0x10))(iVar1);
  return iVar1 != 0;
}

